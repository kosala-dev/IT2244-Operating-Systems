
# Process Creation and Summation - C Programs

---

## 01.c - Basic Fork Example

This program creates a child process using `fork()` and prints different messages from the parent and child processes.

### Code:

```c
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
```
<img width="959" alt="1" src="https://github.com/user-attachments/assets/04dfb4b5-87af-467d-bf9c-1b135cf39384" />

---

## 02.c - Number Printing and Summation

This program uses `fork()` to split tasks between child and parent processes. The child prints numbers 1 to 5 and the parent prints numbers 6 to 10. Each process calculates and prints the summation of its respective range.

### Code:

```c
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
```
<img width="959" alt="2" src="https://github.com/user-attachments/assets/09988c75-39ea-446e-8924-32076171d106" />

---

## How to Compile and Run

Use the `gcc` compiler to compile the programs:

```bash
gcc 01.c -o prog1
./prog1

gcc 02.c -o prog2
./prog2
```
---
