#include<stdio.h>
#include<locale.h>

	struct Cadastro{
	char nome[40];
	char telefone[20];
	char endereco[50];
	};
	

int main(){

	setlocale(LC_ALL, "Portuguese");

	printf("Digite um numero para o vetor cadastro\n");
	int N;
	scanf("%d", &N);
	fflush(stdin);
	
	struct Cadastro cadastro[N];

	for(int i = 0; i< N; i++){
	
		printf("\nCadastro %d\n\n", i+1);
		
		printf("Nome \n");
		scanf("%[^\n]", cadastro[i].nome);
		getchar();
		
		printf("Telefone \n");
		scanf("%[^\n]", &cadastro[i].telefone);
		getchar();
		
		printf("Endereço \n");
		scanf("%[^\n]", cadastro[i].endereco);	
		getchar();
	}

		//Impressão

	printf("\n\n\n-----RESULTADO-----\n\n\n");

	for(int i = 0; i<N; i++){
		printf("Cadastro %d\n\n", i+1);
		
		printf("Nome: %s\n", cadastro[i].nome);
	
		printf("Telefone: %s\n", cadastro[i].telefone);
	
		printf("Endereço: %s\n\n", cadastro[i].endereco);
		
	}

	return 0;
}
