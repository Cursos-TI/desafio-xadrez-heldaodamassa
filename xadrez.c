#include <stdio.h>

int main() {
   
    int i;
    int movimentoTorre = 5;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("cima (%d)\n", i);
    }

    printf("\n");

   
    int movimentoBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");
    while (contadorBispo <= movimentoBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    printf("\n");

   
    int movimentoRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

   
    printf("\nSimulação concluída!\n");

    return 0;
}
