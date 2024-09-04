#include <stdio.h>


int main() {

    int escolha = 0;
    int tamanho = 0;

    printf("\n========== MENU ==========\n");
    printf("\n[1] quadrado vazado");
    printf("\n[2] quadrado preenchido\n");
    printf("\n============================\n");
    printf(">> ");
    scanf("%d", &escolha);

    if (escolha != 1 && escolha != 2) {
        printf("Por favor, escolha um dos números do menu!");

        return 1;
    }

    printf("\nInforme o tamanho do quadrado: ");
    scanf("%d", &tamanho);

    switch(escolha){
        case 1:
            for (int i = 0; i < tamanho; i++) {
                for (int j = 0; j < tamanho; j++) {
                    if (i == 0 || j == 0 || i == tamanho - 1 || j == tamanho - 1) {
                        printf("* ");
                    }

                    else {
                        printf("  ");
                    }
                }
                printf("\n");
            }

            break;

        case 2:
            for (int i = 0; i < tamanho; i++) {
                for (int j = 0; j < tamanho; j++) {
                    printf("* ");
                
                }

                printf("\n");
            }

            break;
    }



    return 0;
}