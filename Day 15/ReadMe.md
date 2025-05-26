
# Process Management in C (Fork and PID)

This repository includes examples of using `fork()` and `getpid()` system calls in C for demonstrating parent-child process relationships in Unix/Linux systems.

---

## 01.c - Basic Fork and Process Identification

This program demonstrates how a new child process is created using `fork()`. Both the child and parent processes print their process IDs and identify themselves.

### Code
```c
#include <stdio.h>
#include <unistd.h>

int main(){
    int f = fork(); //copy everything
    int p = getpid();

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
```

---

## 02.c - Multiple Process Creation

This program shows the creation of multiple processes (A, B, and C) using nested forks. Each process prints its own and its parent's process ID.

### Code
```c
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
```

---

## Compilation

Use `gcc` to compile:

```bash
gcc 01.c -o prog01
./prog01

gcc 02.c -o prog02
./prog02
```

## Notes
- `fork()` creates a child process by duplicating the current process.
- `getpid()` returns the process ID of the current process.
- `getppid()` returns the process ID of the parent of the current process.
- Outputs may vary due to process scheduling.
