// writer 
// vi Day21Writer.c
// gcc Day21Writer.c -o Day21Writer
// ./Day21Writer


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_SIZE 1024 //size of shared memory

int main(){
    key_t key = ftok("/home/2021ict36/myprogfile", 65);
    int shmid = shmget(key, SHM_SIZE, IPC_CREAT | 0666); // create shared memory segment
    if(shmid == -1){
        perror("shmget");
        exit(1);
    }

    char *shmaddr = (char*) shmat(shmid, NULL, 0); //attach to shared memory
    if(shmaddr == (char*) - 1){
        perror("shmat");
        exit(1);
    }

    printf("Write data: ");
    fgets(shmaddr, SHM_SIZE, stdin); // write data to shared memory
    printf("Data written in memory:  %s\n", shmaddr);

    shmdt(shmaddr); //detach from the shared memory

    return 0;
}

// reader
// vi Day21Reader.c
// gcc Day21Reader.c -o Day21Reader
// ./Day21Reader

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_SIZE 1024 //size of shared memory

int main(){
    key_t key = ftok("/home/2021ict36/myprogfile", 65);
    int shmid = shmget(key, SHM_SIZE, IPC_CREAT | 0666); // create shared memory segment
    if(shmid == -1){
        perror("shmget");
        exit(1);
    }

    char *shmaddr = (char*) shmat(shmid, NULL, 0); //attach to shared memory
    if(shmaddr == (char*) - 1){
        perror("shmat");
        exit(1);
    }

    printf("Data read from memory: %s\n", shmaddr);
    fgets(shmaddr, SHM_SIZE, stdin); // read data to shared memory
    shmdt(shmaddr);
    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}

-----------------------------------------------
02.c
// vi Day21.c
// gcc Day21.c -o Day21
// ./Day21
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
    size_t size = 4096;
    char *shared_mem = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
    if(shared_mem == MAP_FAILED){
        perror("mmap failed");
        exit(1);
    }

    pid_t pid = fork();
    if(pid == 0){
        // child process
        sprintf(shared_mem, "Hello from child");
        printf("Child wrote: %s\n", shared_mem);
        exit(0);
    } else if(pid > 0){
        // parent process
        wait(NULL); // wait for child to finish
        printf("Parent read: %s\n", shared_mem);
        munmap(shared_mem, size);
    } else {
        perror("fork failed");
        exit(1);
    }

    return 0;
}
