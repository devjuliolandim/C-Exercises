#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Cadastro {
    char nome[40];
    char telefone[20];
    char endereco[50];
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o número de contatos para o vetor cadastro: ");
    int N;
    scanf("%d", &N);
    getchar();

    struct Cadastro cadastro[N];

    for (int i = 0; i < N; i++) {
        printf("\nCadastro %d\n\n", i + 1);

        printf("Nome: ");
        scanf("%[^\n]", cadastro[i].nome);
        getchar();

        printf("Telefone: ");
        scanf("%[^\n]", cadastro[i].telefone);
        getchar();

        printf("Endereço: ");
        scanf("%[^\n]", cadastro[i].endereco);
        getchar();
    }

    printf("\n\n\n-----BUSCA DE CONTATO-----\n\n");

    int opcao;
    printf("Escolha uma opção para buscar o contato:\n");
    printf("1. Buscar pelo primeiro nome\n");
    printf("2. Buscar pelo telefone\n");
    scanf("%d", &opcao);
    getchar();

    int encontrado = 0;
    char busca[40];

    if (opcao == 1) {
        printf("Digite o primeiro nome: ");
        scanf("%[^\n]", busca);
        getchar();

        for (int i = 0; i < N; i++) {
            if (strcmp(busca, cadastro[i].nome) == 0) {
                printf("\nContato encontrado:\n");
                printf("Nome: %s\n", cadastro[i].nome);
                printf("Telefone: %s\n", cadastro[i].telefone);
                printf("Endereço: %s\n", cadastro[i].endereco);
                encontrado = 1;
                break;
            }
        }
    } else if (opcao == 2) {
        printf("Digite o telefone: ");
        scanf("%[^\n]", busca);
        getchar();

        for (int i = 0; i < N; i++) {
            if (strcmp(busca, cadastro[i].telefone) == 0) {
                printf("\nContato encontrado:\n");
                printf("Nome: %s\n", cadastro[i].nome);
                printf("Telefone: %s\n", cadastro[i].telefone);
                printf("Endereço: %s\n", cadastro[i].endereco);
                encontrado = 1;
                break;
            }
        }
    } else {
        printf("Opção inválida.\n");
    }

    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }

    return 0;
}

