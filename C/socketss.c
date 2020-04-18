
#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>

int main (void) {

    int mysocket;
    int conect;

    struct sockaddr_in target;

    mysocket = socket(AF_INET, SOCK_STREAM, 0);
    target.sin_family = AF_INET;
    target.sin_port = htons(81);
    target.sin_addr.s_addr = inet_addr("192.168.0.1");

    conect = connect(mysocket, (struct sockaddr *)&target, sizeof target);

    if (connect == 0) {
        printf("Open port \n");
        close(mysocket);
        close(conect);
    } else {
        printf("Closed port \n");
    }

    return 0;
}