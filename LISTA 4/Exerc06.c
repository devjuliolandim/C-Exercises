#include <stdio.h>

int main() {
    int valor1, valor2, menor, maior, soma = 0, contador = 0;
    float media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);


    if (valor1 < valor2) {
        menor = valor1;
        maior = valor2;
    } else {
        menor = valor2;
        maior = valor1;
    }

    for (int i = menor; i <= maior; i++) {
        soma += i;
        contador++;
    }

    media = (float) soma / contador;

    printf("Soma: %d\n", soma);
    printf("Media: %.2f\n", media);

    return 0;
}

