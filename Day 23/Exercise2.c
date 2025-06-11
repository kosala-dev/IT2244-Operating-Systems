/*
step1: parent process get input from user
step2: sending the inputs to the child
step3: child process getting these inputs from parent and doing calculations
(Area of circle, triangle, rectangle, square)
step4: send the calculated values to the parent
step5: parent prints the output

sample:
Area Calculation Program
Circle => C
Triangle => T
Square => S
Rectangle => R
Enter your choice: C

Circle Area Calculation
Enter the radius: 7
Area of circle is: 43.96

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main() {
    int pipefd1[2], pipefd2[2];
    pid_t pid;

    if (pipe(pipefd1) == -1 || pipe(pipefd2) == -1) {
        perror("Pipe creation failed");
        exit(1);
    }

    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    if (pid > 0) {  
        close(pipefd1[0]);
        close(pipefd2[1]);

        int shape;
        float dimensions[2], area;

        while (1) { 
            printf("\nChoose Shape (1: Circle, 2: Triangle, 3: Rectangle, 4: Square, 5: Exit): ");
            scanf("%d", &shape);

            if (shape == 5) {
                printf("Exiting...\n");
                break;
            }

            switch (shape) {
                case 1:
                    printf("Enter radius: ");
                    scanf("%f", &dimensions[0]);
                    break;
                case 2:
                    printf("Enter base and height: ");
                    scanf("%f %f", &dimensions[0], &dimensions[1]);
                    break;
                case 3:
                    printf("Enter length and width: ");
                    scanf("%f %f", &dimensions[0], &dimensions[1]);
                    break;
                case 4:
                    printf("Enter side length: ");
                    scanf("%f", &dimensions[0]);
                    break;
                default:
                    printf("Invalid choice! Try again.\n");
                    continue;
            }

            write(pipefd1[1], &shape, sizeof(shape));
            write(pipefd1[1], dimensions, sizeof(dimensions));

            read(pipefd2[0], &area, sizeof(area));

            printf("\nCalculated Area: %.2f\n", area);
        }

        close(pipefd1[1]);
        close(pipefd2[0]);

    } else {  
        close(pipefd1[1]);
        close(pipefd2[0]);

        int shape;
        float dimensions[2], area;

        while (1) {
            if (read(pipefd1[0], &shape, sizeof(shape)) <= 0) {
                break;
            }
            read(pipefd1[0], dimensions, sizeof(dimensions));

            switch (shape) {
                case 1:
                    area = M_PI * dimensions[0] * dimensions[0];
                    break;
                case 2:
                    area = 0.5 * dimensions[0] * dimensions[1];
                    break;
                case 3:
                    area = dimensions[0] * dimensions[1];
                    break;
                case 4:
                    area = dimensions[0] * dimensions[0];
                    break;
                default:
                    area = 0; 
            }

            write(pipefd2[1], &area, sizeof(area));
        }

        close(pipefd1[0]);
        close(pipefd2[1]);
    }

    return 0;
}
