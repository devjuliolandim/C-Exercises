#include <stdio.h>

int main() {
    int totalmercadorias = 0;
    float valormercadoria, valortotal = 0, mediavalor;
    char maismercadorias;

    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valormercadoria);
        valortotal += valormercadoria;
        totalmercadorias++;

        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &maismercadorias);
    } while (maismercadorias == 'S' || maismercadorias == 's');

    mediavalor = valortotal / totalmercadorias;

    printf("\nValor total em estoque: R$ %.2f\n", valortotal);
    printf("Média de valor das mercadorias: R$ %.2f\n", mediavalor);

    return 0;
}

