# Q8. Write a script to an electronic dice and its output by generaing random numbers.

echo "Q8. Write a script to an electronic dice and its output by generaing random numbers."
echo "Rolling the dice..."
roll=$((RANDOM % 6 + 1))
echo "You rolled a $roll!"

chmod 777 Q8.sh
./Q8.sh
..................................................................................................

# Q09 write a shell script to read n numbers as command arguments and sort them in descending order

echo "Q09 write a shell script to read n numbers as command arguments and sort them in descending order"
read -p "Enter the number of elements: " n
if [ "$n" -le 0 ]; then
  echo "Please enter a valid positive integer."
  exit 1
fi

numbers=()
echo "Enter $n numbers:"

for (( i=0; i<n; i++ )); do
  read num
  numbers+=("$num")
done
echo "Descending order"
printf "%s\n" "${numbers[@]}" | sort -nr

chmod 777 Q9.sh
./Q8.sh
..................................................................................................


Q10. 
# write a shell script to generate a marksheet of a student. Take 3 subjects, calculate and display the total marks, average and
# grade of each subject obtain by the student

read -p "Enter student's name: " name

read -p "Enter marks for Subject 1: " m1
read -p "Enter marks for Subject 2: " m2
read -p "Enter marks for Subject 3: " m3

total=$((m1 + m2 + m3))
average=$((total / 3))

if [ $average -ge 90 ]; then
    grade="A"
elif [ $average -ge 75 ]; then
    grade="B"
elif [ $average -ge 60 ]; then
    grade="C"
elif [ $average -ge 40 ]; then
    grade="D"
else
    grade="F"
fi

echo -e "\n--- Marksheet ---"
echo "Name    : $name"
echo "Subject 1: $m1"
echo "Subject 2: $m2"
echo "Subject 3: $m3"
echo "Total   : $total"
echo "Average : $average"
echo "Grade   : $grade"

chmod 777 Q10.sh
./Q10.sh
..................................................................................................

Q11.
#  Write a shell script to display the multiplication number of the given table.

read -p "Enter a number: " num

echo "Multiplication table for $num:"
for ((i = 1; i <= 10; i++)); do
    result=$((num * i))
    echo "$num x $i = $result"
done

chmod 777 Q11.shell
./Q11.sh
..................................................................................................

Q12.
# Parent A have two childs b & c. child b takes two inputs from the user and send the inputs to c using IPC (pipe, shared memory, ..)
# child c calculates the addition, substraction, multiplication and division and send the output to parent and display

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int pipe1[2], pipe2[2]; 
    pid_t b, c;

    pipe(pipe1);
    pipe(pipe2);

    b = fork();
    if (b == 0) {
        close(pipe1[0]);
        int x, y;
        printf("Child B.Enter two integers:\n");
        scanf("%d%d", &x, &y);
        write(pipe1[1], &x, sizeof(int));
        write(pipe1[1], &y, sizeof(int));
        close(pipe1[1]);
        exit(0);
    }

    c = fork();
    if (c == 0) {
        close(pipe1[1]); // Close write end
        close(pipe2[0]); // Close read end
        int x, y;
        read(pipe1[0], &x, sizeof(int));
        read(pipe1[0], &y, sizeof(int));

        int sum = x + y;
        int diff = x - y;
        int mul = x * y;
        float div = (y != 0) ? (float)x / y : 0;

        write(pipe2[1], &sum, sizeof(int));
        write(pipe2[1], &diff, sizeof(int));
        write(pipe2[1], &mul, sizeof(int));
        write(pipe2[1], &div, sizeof(float));

        close(pipe1[0]);
        close(pipe2[1]);
        exit(0);
    }

    close(pipe1[0]); close(pipe1[1]);
    close(pipe2[1]); // Close write end

    int sum, diff, mul;
    float div;
    read(pipe2[0], &sum, sizeof(int));
    read(pipe2[0], &diff, sizeof(int));
    read(pipe2[0], &mul, sizeof(int));
    read(pipe2[0], &div, sizeof(float));

    printf("\nParent A.Results from C:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("multiplication: %d\n", mul);
    if (div != 0 || mul == 0)
        printf("Division: %.2f\n", div);
    else
        printf("Division: undefined (division by zero)\n");

    close(pipe2[0]);

    wait(NULL);
    wait(NULL);

    return 0;
}
