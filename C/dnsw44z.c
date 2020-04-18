#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <netdb.h>

int main (int argc, char *argv[]) {
    char *target;
    target = argv[1];
    struct hostnet *host;
    char *result;
    char txt[50];
    FILE *waaz;
    waaz = fopen(argv[2],"r");

    if (argc < 2) {
        printf("|==|==|==|==|==|==|==|==|==|==|==|==|==|==|==|==|==|==|\n");
        printf("|==|==|==|==|==|==| DNSW44Z v1.0 |==|==|==|==|==|==|==|\n");
        printf("|==|==|==|. $ ./dnsw44z target.com.br waaz.txt .|==|==|\n");
        printf("|==|==| Eduardo Faria  z.eduardofaria@gmail.com |==|==|\n");
        printf("|==|==|==|==|==|==|==|==|==|==|==|==|==|==|==|==|==|==|\n");
        return 0;
    }

    while(fscanf(waaz, "$s", &txt) != EOF) {
        result = (char *) strcat(txt,target);
        host = gethostbyname(result);

        if (host == NULL) {
            continue;
        }

        printf("HOST FOUND: %s ===========> IP: %s \n", result, inet_ntoa(*((struct in_addr *)host->h_addr)));
    }

    return 0;
}