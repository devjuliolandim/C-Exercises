#include<stdio.h>

int fibonacci(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void exibirSerieFibonacci(int X) {
    printf("Série de Fibonacci até o termo %d:\n", X);
    for (int i = 1; i <= X; i++) {
        int fib = fibonacci(i);
        printf("%d ", fib);
    }
    printf("\n");
}

int main() {
    int X;
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &X);

    exibirSerieFibonacci(X);

    return 0;
}

