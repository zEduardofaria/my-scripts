#include <stdio.h>

int main(int argc, char *argv[]) {

    int i;
    char *ip;
    ip = argv[1];

    if (argc<2) {
        printf("Modo de uso: \n $ ./argsAndReps 192.168.0.1 \n");
    } else {
        for (i=235;i<=255;i++) {
            printf("Varrendo Host %s.%i \n",ip,i);
        }

        return 0;
    }
}