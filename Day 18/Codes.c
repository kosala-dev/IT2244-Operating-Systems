01.c

#include <stdio.h>
#include <unistd.h> //for sleep()
#include <stdlib.h> //for exit()

int main(){
    printf("Program Started\n");
    printf("Sleeping for 3 seconds...\n");
    sleep(3);

    printf("Exiting the program\n");
    exit(0); //clean exit
    // exit(1) -> still running
    //exit(-1) -> terminate unsuccesfully
}

------------------------------
02.c

#include <stdio.h>
#include <unistd.h> //for fork(), sleep()
#include <stdlib.h> //for exit()
#include <sys/wait.h> //for wait()

int main(){
    pid_t pid;
    printf("Parent process started.PID: %d\n", getpid());

    pid = fork();
    if(pid < 0){
        perror("Fork failed");
        exit(1);
    }

    if(pid == 0){
        printf("Child process.PID: %d, sleeping for 2 seconds...\n", getpid());
        sleep(2);
        printf("Child process exiting.\n");
        exit(0); // child exit with status 0
    } else {
        int status;
        printf("Parent waiting for child to finish...\n");
        wait(&status); // wait for child to finish
        if(WIFEXITED(status)){
            printf("Child exited with status %d\n", WEXITSTATUS(status));
        } else {
            printf("Child did not exit normally\n");
        }
        printf("Parent process ending.\n");
    }

    return 0;
}

