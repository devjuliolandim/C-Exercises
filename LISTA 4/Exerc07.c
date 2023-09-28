#include <stdio.h>

int main() {
    int totalmercadorias;
    float valormercadoria, valortotal = 0, mediavalor;

    printf("Digite o número total de mercadorias no estoque: ");
    scanf("%d", &totalmercadorias);

    for (int i = 1; i <= totalmercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valormercadoria);
        valortotal += valormercadoria;
    }

    mediavalor = valortotal / totalmercadorias;

    printf("\nValor total em estoque: R$ %.2f\n", valortotal);
    printf("Média de valor das mercadorias: R$ %.2f\n", mediavalor);

    return 0;
}

