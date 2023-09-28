#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	typedef struct pessoa{
	char nome[50];
	int idade;
	int cpf;
	}pessoa;

	pessoa exemplo;

	printf("Digite o nome da pessoa\n");
	scanf("%[^\n]", exemplo.nome);
	getchar();

	printf("Digite a idade da pessoa\n");
	scanf("%d", &exemplo.idade);
	getchar();

	printf("Digite o CPF da pessoa\n");
	scanf("%d", &exemplo.cpf);
	getchar();

	printf("\n\n---RESULTADO---\n\n");	
	printf("Nome: %s\n", exemplo.nome);
	printf("Idade: %d\n", exemplo.idade);
	printf("CPF: %d\n", exemplo.cpf);

	return 0;
}

