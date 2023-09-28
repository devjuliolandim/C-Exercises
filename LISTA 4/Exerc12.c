#include <stdio.h>

int main() {
    int n;
    int num1 = 0, num2 = 1, proximonum;

    printf("Digite um numero inteiro positivo (0 < N < 46): ");
    scanf("%d", &n);

    printf("Serie de Fibonacci com os primeiros %d numeros:\n", n);

    printf("%d %d ", num1, num2);

    for (int i = 3; i <= n; i++) {
        proximonum = num1 + num2;
        printf("%d ", proximonum);
        num1 = num2;
        num2 = proximonum;
    }

    printf("\n");

    return 0;
}

