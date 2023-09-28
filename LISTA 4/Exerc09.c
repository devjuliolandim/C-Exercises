#include <stdio.h>

int main() {
    int num, cont, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (cont = 2; cont <= num / 2; cont++) {
        if (num % cont == 0) {
            primo = 0;
            break;
        }
    }

    if (primo == 1)
        printf("%d e' um numero primo.\n", num);
    else
        printf("%d nao e' um numero primo.\n", num);

    return 0;
}

