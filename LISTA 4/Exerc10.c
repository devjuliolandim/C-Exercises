#include <stdio.h>

int main() {
    int operacao;

    printf("Escolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Todas\n");
    scanf("%d", &operacao);

    if (operacao == 1 || operacao == 4) {
        printf("\nTabuada de Soma:\n");
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                printf("%d + %d = %d\n", i, j, i + j);
            }
            printf("\n");
        }
    }

    if (operacao == 2 || operacao == 4) {
        printf("\nTabuada de Subtração:\n");
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                printf("%d - %d = %d\n", i, j, i - j);
            }
            printf("\n");
        }
    }

    if (operacao == 3 || operacao == 4) {
        printf("\nTabuada de Multiplicação:\n");
        for (int i = 1; i <= 10; i++) {
            for (int j = 1; j <= 10; j++) {
                printf("%d * %d = %d\n", i, j, i * j);
            }
            printf("\n");
        }
    }

    return 0;
}

