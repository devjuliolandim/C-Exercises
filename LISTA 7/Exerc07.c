#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");


	typedef enum {solteiro=1, casado, separado, viuvo}estadocivil;

	struct pessoa{
	char nome[50];
	int idade;
	float peso;
	estadocivil est_civil;
	};

	struct pessoa pessoas[3];

	int opcao;


	for(int i = 0; i<3; i++){
	printf("Pessoa %d:\n", i+1);
	
	printf("Nome: ");
	scanf("%[^\n]", pessoas[i].nome);
	getchar();
	
	printf("Idade: ");
	scanf("%d", &pessoas[i].idade);
	
	printf("Peso: ");
	scanf("%f", &pessoas[i].peso);
	getchar();
	
	printf("Estado Civil:\n");
	printf("1. Solteiro\n");
	printf("2. Casado\n");
	printf("3. Separado\n");
	printf("4. Viúvo\n");
	
	scanf("%d", &opcao);
	getchar();
	pessoas[i].est_civil = opcao;
	
	printf("\n");
	}


	for(int i = 0; i<3; i++){
	
		printf("Pessoa %d:\n", i + 1);
		printf("Nome: %s\n", pessoas[i].nome);
		printf("Idade: %d\n", pessoas[i].idade);
		printf("Peso: %.2f\n", pessoas[i].peso);
		switch(pessoas[i].est_civil){
		case 1:
		printf("Solteiro(a)\n");
		break;
		
		case 2:
		printf("Casado(a)\n");
		break;
		
		case 3:
		printf("Separado(a)\n");
		break;
		
		case 4:
		printf("Viúvo(a)\n");
		break;
		
		default:
		printf("A opção digitada não foi válida\n");
		
		}
			
		
		printf("\n\n");
	}


	return 0;
}
