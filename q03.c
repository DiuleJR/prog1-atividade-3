#include <stdio.h>



int main() {

    int centroLosango = 0;

    printf("Informe o centro do losango: ");
    scanf("%d", &centroLosango);

    // esse loop faz a parte de cima do losango
    for (int i = 1; i <= centroLosango; i++) {

        for (int k = 0; k < centroLosango - i; k++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("X ");
        }

        printf("\n");
    }

    // Esse loop faz a parte de baixo do losango
    for (int i = centroLosango - 1; i > 0; i--) {

        for (int k = 0; k < centroLosango - i; k++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("X ");
        }

        printf("\n");
    }

    return 0;
}