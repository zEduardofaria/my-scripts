// Meu primeiro programa em C
#include <stdio.h>

int main (void) {

    int porta;
    char ip[16];

    printf("Desec Security \n");

    printf("Digite o IP \n");
    scanf("%s",&ip);

    printf("Digite a Porta \n");
    scanf("%i",&porta);

    
    printf("Varrendo Host: %s na porta %i \n",ip,porta);

    return 0;
}