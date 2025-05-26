
# Two C Programs Demonstrating `sleep()`, `fork()`, `exit()` and `wait()`

This README documents two C programs:

- **01.c**: Demonstrates the use of `sleep()` and `exit()` for a clean program exit.
- **02.c**: Demonstrates parent-child process behavior using `fork()`, `sleep()`, and `wait()`.

---

## 🧪 Program 1: `01.c`

### 🔍 Description

This simple program starts, waits for 3 seconds using `sleep(3)`, and then exits cleanly using `exit(0)`.

### 💻 Compilation & Execution

```bash
gcc filename.c -o filename
./filename
```

### 📄 Source Code

```c
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
    //exit(-1) -> terminate unsuccessfully
}
```

---

## 🧪 Program 2: `02.c`

### 🔍 Description

This program demonstrates process forking and synchronization:

- Parent creates a child process.
- Child sleeps for 2 seconds then exits.
- Parent waits for the child to finish and checks the exit status.

### 💻 Compilation & Execution

```bash
gcc filename.c -o filename
./filename
```

### 📄 Source Code

```c
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
```

---

## 🧠 Exercises

### 🧪 Exercise 1: Two Sequential Child Processes

**Description:**  
- First child sleeps for 1 second  
- Second child sleeps for 3 seconds  
- Parent waits for both and prints their statuses

**Source Code:**

```c
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
```

---

### 🧪 Exercise 2: Parallel Child Processes with Different Exit Codes

**Description:**  
- First child sleeps for 2 seconds, exits with 2  
- Second child sleeps for 1 second, exits with 1  
- Parent waits twice and prints which exited first/second

**Source Code:**

```c
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2, wpid;
    int status;

    pid1 = fork();
    if (pid1 == 0) {
        sleep(2);
        exit(2);
    }

    pid2 = fork();
    if (pid2 == 0) {
        sleep(1);
        exit(1);
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
```

---

### 🧪 Exercise 3: Grandchild Process Exit Handling

**Description:**  
- Parent creates a child  
- Child creates a grandchild  
- Grandchild sleeps for 2 seconds and exits with 2  
- Child waits for grandchild, exits with 55  
- Parent prints child’s exit status

**Source Code:**

```c
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
```
