#include <stdio.h>


int main() {

    int escolha = 0;
    int altura = 0;

    printf("\n========== MENU ==========\n");
    printf("\n[1] triângulo vazado");
    printf("\n[2] triângulo preenchido\n");
    printf("\n============================\n");
    printf(">> ");
    scanf("%d", &escolha);

    if (escolha != 1 && escolha != 2) {
        printf("Por favor, escolha um dos números do menu!");

        return 1;
    }

    printf("\nInforme a altura do triângulo: ");
    scanf("%d", &altura);

    switch(escolha){
        case 1:
            for (int i = 1; i <= altura; i++) {
                for (int j = 0; j < i; j++) {
                    if (i == altura || j == 0|| j == i - 1) {
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
            for (int i = 1; i <= altura; i++) {
                for (int j = 0; j < i; j++) {
                    printf("* ");
                
                }
                printf("\n");
            }

            break;
    }



    return 0;
}