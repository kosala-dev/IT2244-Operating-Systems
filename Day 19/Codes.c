//send
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX 100

//structure for message queue
struct msg_buffer{
    long msg_type;
    char msg_txt[100];
} message;

int main(){
    key_t key;
    int msgid;

    //ftok to generate unique key
    key = ftok("progfile", 65);

    //msgget creates a message queue  and returns identifier
    msgid = msgget(key, 0666 | IPC_CREAT);
    message.msg_type = 1;
    printf("Write data: ");
    fgets(message.msg_txt, MAX, stdin);

    //msgsnd is used to send message
    msgsnd(msgid, &message, sizeof(message), 0);

    //display the message
    printf("Data send is: %s \n", message.msg_txt);

    return 0;
}

//receive
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

//structure for message queue
struct msg_buffer{
    long msg_type;
    char msg_txt[100];
} message;

int main(){
    key_t key;
    int msgid;

     //ftok to generate unique key
     key = ftok("progfile", 65);

     //msgget creates a message queue  and returns identifier
     msgid = msgget(key, 0666 | IPC_CREAT);
     
    //msgrcv to receive message
    msgrcv(msgid, &message, sizeof(message), 1, 0);

    //display the message
    printf("Data received is: %s \n", message.msg_txt);

    // to destroy the message queue
    msgctl(msgid, IPC_RMID, NULL);

    return 0;
}