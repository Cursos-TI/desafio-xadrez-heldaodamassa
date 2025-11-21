#include <stdio.h>


void moverTorreRec(int atual, int limite) {
    if (atual > limite) return;

    printf("Cima (%d)\n", atual);

    moverTorreRec(atual + 1, limite);
}

void moverBispoRec(int atual, int limite) {
    if (atual > limite) return;

   
    for (int v = 1; v <= 1; v++) {
        printf("Cima ");

       
        for (int h = 1; h <= 1; h++) {
            printf("Direita (%d)\n", atual);
        }
    }

    moverBispoRec(atual + 1, limite);
}


void moverRainhaRec(int atual, int limite) {
    if (atual > limite) return;

    printf("Esquerda (%d)\n", atual);

    moverRainhaRec(atual + 1, limite);
}


void moverCavalo() {

    int movimentos = 3;

    for (int i = 1; i <= movimentos; i++) {


        for (int v = 1; v <= 2; v++) {
            printf("Cima (%d)\n", v);
        }

        for (int h = 1; h <= 1; h++) {
            printf("Direita (1)\n");

            continue; 
        }

        if (i == movimentos)
            break; 
    }
}


int main() {

    int movimentoTorre = 5;
    int movimentoBispo = 5;
    int movimentoRainha = 8;

    
    printf("Movimento da Torre:\n");
    moverTorreRec(1, movimentoTorre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoRec(1, movimentoBispo);
    printf("\n");

 
    printf("Movimento da Rainha:\n");
    moverRainhaRec(1, movimentoRainha);
    printf("\n");

    
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    printf("Simulação concluída!\n");

    return 0;
}
