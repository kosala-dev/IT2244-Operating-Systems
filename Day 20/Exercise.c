/* using IPC message queue
    read inputs from the parent process
    Enter name: Kosala
    Enter RegNo: 2021ICT36
    Enter age: 23

    message sent succefully

    give the output from the child process
    Received name: Kosala
    Received RegNo: 2021ICT36
    Received age: 23

*/

//parent_child.c

#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>
#include <stdlib.h>
#define MAX 100

struct msg_buffer{
    long msg_type;
    char msg_name[MAX];
    char msg_RegNo[MAX];
    int msg_age;
}message;

int main(){
    key_t key;
    int msgid;

    key = ftok("/home/2021ict36/myprogfile", 65);

    msgid = msgget(key, 0666 |IPC_CREAT);
    message.msg_type = 1;

    printf("Im Parent process ID: %d\n", getpid());
    printf("Enter name: ");
    fgets(message.msg_name, MAX, stdin);
    printf("Enter RegNo: ");
    fgets(message.msg_RegNo, MAX, stdin);
    printf("Enter age: ");
    char age_str[10];
    fgets(age_str, 10, stdin);
    message.msg_age = atoi(age_str);

    msgsnd(msgid, &message, sizeof(message) - sizeof(long), 0);

    int f1 = fork();
    if(f1 < 0){
        perror("Fork Failed");
    } else if(f1 == 0){
        msgrcv(msgid, &message, sizeof(message) - sizeof(long), 1, 0);

        printf("\nIm Child process Parent ID: %d", getppid());
        printf("\nReceived name: %s", message.msg_name);
        printf("\nReceived RegNo: %s", message.msg_RegNo);
        printf("\nReceived age: %d\n", message.msg_age);
        msgctl(msgid, IPC_RMID, NULL);
    }

    return 0;
}