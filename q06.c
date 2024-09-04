#include <stdio.h>


int main() {

    int arvoreBase;
    int arvoreLargura;
    int arvoreAltura;

    while(1){
        printf("\n\nInforme a base da árvore: ");
        scanf("%d", &arvoreBase);
        
        if (arvoreBase < 3 || arvoreBase % 2 == 0) {
            printf("Por favor, escolha um número ímpar e maior ou igual a 3.");
        } else {
            break;
        }
    }

    while(1){
        printf("\n\nInforme a largura do tronco da árvore: ");
        scanf("%d", &arvoreLargura);

        if (arvoreLargura < 1 || arvoreLargura % 2 == 0 || arvoreLargura > arvoreBase / 2) {
            printf("O mínimo para a largura do tronco é 1, precisa ser impar e não pode ultrapassar a metade da base");
        } else {
            break;
        }  
    }

    while(1){
        printf("\n\nInforme a altura do tronco da árvore: ");
        scanf("%d", &arvoreAltura);

        if (arvoreAltura < 2 || arvoreAltura > arvoreBase / 2) {
            printf("A altura mínima é 2, também é preciso que a árvore não ultrapasse a metade do tamanho da base.");
        } else {
            break;
        } 
    }


    for (int i = 1; i <= arvoreBase; i++){
        
        for (int k = 0; k < arvoreBase - i; k++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    for (int i = 0; i < arvoreAltura; i++) {

        for (int k = 0; k < (arvoreBase - arvoreLargura) / 2; k++) {
            printf("  ");
        }
          
        for (int j = 0; j < arvoreLargura; j++) {
            printf("* ");
        }

        printf("\n");
    }



    return 0;
}