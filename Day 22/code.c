#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MSGSIZE 16
char* msg1 = "Hello, world #1";
char* msg2 = "Hello, world #2";
char* msg3 = "Hello, world #3";

int main(){
    char inbuf[MSGSIZE];
    int p[2], i;

    if (pipe(p) < 0)
        exit(1);

    /* continued */
    // write pipe

    write(p[1], msg1, MSGSIZE); // write(fields, message, messagesize)
    write(p[1], msg2, MSGSIZE);
    write(p[1], msg3, MSGSIZE);

    for(i = 0; i < 3; i++){
        /* read pipe */
        read(p[0], inbuf, MSGSIZE);
        printf("%s\n", inbuf);
    }
    return 0;
}

