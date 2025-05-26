01.c

#include <stdio.h>
#include <unistd.h>

int main(){
    int f1 = fork();
    if(f1 == 0){
        printf("\nI'm Child Process. My parent process id is %d\n", getppid());
    } else {
        printf("\nI'm Parent Process. My id is %d", getpid());
    }

    return 0;
}

02.c
//Print numbers from 1 to 10.1 to 5 should be printed by child process and 6 to 10 should be printed by parent process
//Calculate the summation of those numbers

#include <stdio.h>
#include <unistd.h>

int main(){

    int sumChild = 0;
    int sumParent = 0;
    int f1 = fork();
    if(f1 == 0){
        printf("\nI'm Child Process\n");
        for(int a = 1; a <= 5; a++){
            printf(" %d ", a);
            sumChild += a;
        }
        printf("\nChild process summation is %d\n", sumChild);

    } else {
        printf("\nI'm Parent Process\n");
        for(int a = 6; a <= 10; a++){
            printf(" %d ", a);
            sumParent += a;
        }
        printf("\nParent process summation is %d\n", sumParent);
    }

    return 0;
}