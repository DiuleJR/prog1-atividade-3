#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {

    int qtdLinhas = 0;

    printf("Quantidade de linhas: ");
    scanf("%d", &qtdLinhas);

    for (int i = 0; i < qtdLinhas; i++) {

        for (int k = 0; k < (qtdLinhas - i + 1); k++) {
            printf(" ");
        }

        for (int j = 0; j < i + 1; j++) {

            int formula = tgamma(i + 1) / (tgamma(j + 1) * tgamma(i - j + 1));

            printf("%d ", formula);

        }
        printf("\n");
    }


    system("PAUSE");
    return 0;
}