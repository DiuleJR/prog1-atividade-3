#include <stdio.h>

int main() {
    int N, i, j;

    printf("Digite o valor de n: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("O valor de N deve ser maior ou igual a 2.\n");
        return 1; 
    }

    for (i = 1; i <= N; i++) {

        for (j = 0; j < N - i; j++) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
