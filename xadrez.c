#include <stdio.h>

int main() {

    // DECLARAÇÃO DE CONSTANTES

    const int passosBispo = 5;
    const int passosTorre = 5;
    const int passosRainha = 8;

    int i; // variável de controle dos loops

    // BISPO - diagonal superior direita (FOR)
    
    printf("=== Movimento do Bispo ===\n");

    for(i = 0; i < passosBispo; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // TORRE - direita (WHILE)
    
    printf("\n=== Movimento da Torre ===\n");

    i = 0;
    while(i < passosTorre) {
        printf("Direita\n");
        i++;
    }

    // RAINHA - esquerda (DO-WHILE)

    printf("\n=== Movimento da Rainha ===\n");

    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < passosRainha);

    // CAVALO - movimento em L
    // LOOPS ANINHADOS
    
    printf("\n=== Movimento do Cavalo ===\n");

    for(i = 0; i < movimentosCavalo; i++) {   // repete o "L"

        // sobe 2 casas
        for(j = 0; j < 2; j++) {
            printf("Cima\n");
        }

        // anda 1 para direita
        printf("Direita\n");
    }


    return 0;
}
