01.c
#include <stdio.h>
#include <unistd.h>

int main(){
    int f = fork(); //copy everything
    int p = getpid();
    /* printf("\nThe pid is %d", p);
    printf("\nThe fork is %d\n", f); */

    if( f == 0){
        printf("\nI'm child process");
        printf("\nThe pid is %d", p);
        printf("\nThe fork is %d\n", f);
    } else {
        printf("\nI'm Parent process");
        printf("\nThe pid is %d", p);
        printf("\nThe fork is %d\n", f);
    }
    
    return 0;
}

----------------------------------
02.c

#include <stdio.h>
#include <unistd.h>
int main(){
    int f = fork();
    if(f == 0){
        printf("\nI'm B");
        printf("My parent ID is : %d\n", getppid());
    } else {
        int f1 = fork();
        if(f1 == 0){
            printf("\nI'm C\n");
            printf("My parent ID is : %d", getppid());
        }else {
            printf("I'm A\n");
            printf("My ID: %d\n", getpid());
        }
    }
    return 0;
}