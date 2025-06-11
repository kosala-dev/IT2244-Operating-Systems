/* 01. get two input from user(parent process)
    name:
    reg_no:
    age:


   02. Print the output from the child
   name:
   reg_no:
   age:
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MSGSIZE 100  


int main() {
    char name[MSGSIZE], reg_no[MSGSIZE], age[MSGSIZE];
    char inbuf[MSGSIZE];
    int p[2];  
    pid_t pid;

    // Create pipe
    if (pipe(p) < 0) {
        perror("Pipe failed");
        exit(1);
    }

    // Get user input from the parent process
    printf("Enter name: ");
    scanf("%s[^\n]", name);  

    printf("Enter registration number: ");
    scanf("%s[^\n]", reg_no);  

    printf("Enter age: ");
    scanf("%c[^\n]", age); 

    // Fork a child process
    pid = fork();
    if (pid < 0) {
        perror("Fork failed");
        exit(1);
    }

    if (pid > 0) {  
        close(p[0]);

        write(p[1], name, MSGSIZE);
        write(p[1], reg_no, MSGSIZE);
        write(p[1], age, MSGSIZE);

    } else {  
        close(p[1]);

        read(p[0], inbuf, MSGSIZE);
        printf("\nChild Process Output:\n");
        printf("Name: %s\n", inbuf);

        read(p[0], inbuf, MSGSIZE);
        printf("Registration Number: %s\n", inbuf);

        read(p[0], inbuf, MSGSIZE);
        printf("Age: %s\n", inbuf);

        exit(0);
    }

    return 0;
}

