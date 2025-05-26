---------------------------------
01.c
//First child: slept for 1 seconds
//Second child: slept for 3 seconds
//Parent: Both children have finished

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int status1;

int main(){
    int f1 = fork();
    if(f1 < 0){
        perror("Fork Failed\n");
        exit(1);
    } else if(f1 == 0){
        printf("I'm child 1 process. Parent ID %d\n", getppid());
        printf("Sleeping for 1 second...\n");
        sleep(1);
        printf("Child 1 Exiting.\n");
        exit(0);
    } else {
        wait(&status1);

        int f2 = fork();
        if (f2 == 0){
            printf("I'm child 2 process. Parent ID %d\n", getppid());
            printf("Sleeping for 3 seconds...\n");
            sleep(3);
            printf("Child 2 Exiting\n");
            exit(0);
        } else {
            printf("I'm parent process.ID %d\n", getpid());
            int status2;
            wait(&status2);

            if(WIFEXITED(status1)){
                printf("Child 1  exited with status %d\n", WEXITSTATUS(status1));
            } else {
                printf("Child 1 did not exit normally\n");
            }

            if(WIFEXITED(status2)){
                printf("Child 2 exited with status %d\n", WEXITSTATUS(status2));
            } else {
                printf("Child 2 did not exit normally\n");
            }
            printf("Parent process exiting.\n");
        }
    }
    return 0;
}

---------------------------------
02.c
//First child: sleeps for 2 seconds, exit with status 2
//Second child: sleeps for 1 second, exit with status 1.
//Parent: waits twice, and prints which child (by PID or exit code) finished first and second

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2, wpid;
    int status;

    pid1 = fork();
    if (pid1 == 0) {
        printf("I'm Child 1. Sleeping for 2 seconds...\n");
        sleep(2);
        exit(2);
        printf("Child 1 Exiting\n");
    }

    pid2 = fork();
    if (pid2 == 0) {
        printf("I'm Child 2. Sleeping for 1 seconds...\n");
        sleep(1);
        exit(1);
        printf("Child 2 Exiting\n");
    }

    for (int i = 0; i < 2; i++) {
        wpid = wait(&status);
        if (WIFEXITED(status)) {
            printf("Child with PID %d exited with status %d\n", wpid, WEXITSTATUS(status));
        } else {
            printf("Child with PID %d did not exit normally\n", wpid);
        }
    }

    return 0;
}



---------------------------------
03.c
//The parent creates a child process
//The child creates a grandchild process
//The grandchild sleeps for 2 seconds and exits with status 2
//The child waits for the grandchild, prints its exit status, then exits with status 55

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid, grandchild_pid;
    int status;

    child_pid = fork();
    if (child_pid < 0) {
        perror("fork failed");
        exit(1);
    }

    if (child_pid == 0) {
        grandchild_pid = fork();
        if (grandchild_pid < 0) {
            perror("fork failed");
            exit(1);
        }

        if (grandchild_pid == 0) {
            sleep(2);
            exit(2);
        } else {
            wait(&status);
            if (WIFEXITED(status)) {
                printf("Grandchild exited with status %d\n", WEXITSTATUS(status));
            } else {
                printf("Grandchild did not exit normally\n");
            }
            exit(55);
        }
    } else {
        wait(&status);
        if (WIFEXITED(status)) {
            printf("Child exited with status %d\n", WEXITSTATUS(status));
        } else {
            printf("Child did not exit normally\n");
        }
    }

    return 0;
}
