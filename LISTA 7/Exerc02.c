#include<stdio.h>
#include<locale.h>

	struct aluno{
	int matricula;
	char nome[40];
	float provas[3];
	};




int main(){

	setlocale(LC_ALL, "Portuguese");
	
	
	struct aluno aluno;
	
	printf("Digite o numero da matr�cula desse aluno!\n");
	scanf("%d", &aluno.matricula);
	getchar();
	
	printf("Digite o nome do aluno\n");
	scanf("%[^\n]s", aluno.nome);
	getchar();
	
	printf("Digite cada uma das tr�s notas do aluno\n");
	float soma = 0;
	for(int i = 0; i<3; i++){
		scanf("%f", &aluno.provas[i]);
		soma+= aluno.provas[i];
	
	}
	
	float media = 0;
	media = soma/3;


	printf("O tamanho dessa estrutura � %zu\n", sizeof(struct aluno));

	return 0;
}
