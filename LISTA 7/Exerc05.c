#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	enum semana {dom = 1, seg, ter, qua, qui, sex, sab } semana;

	printf("Digite um valor inteiro\n");
	int num;
	scanf("%d", &num);
	
	
	semana = num;	
	
	
	
	switch(semana){
	
	case dom:
	printf("Domingo -- 1\n");	
	break;
	
	case seg:
	printf("Segunda-Feira -- 2\n");	
	break;
	
	case ter:
	printf("Terça-Feira -- 3\n");	
	break;
	
	case qua:
	printf("Quarta-Feira -- 4\n");	
	break;
	
	case qui:
	printf("Quinta-Feira -- 5\n");	
	break;
	
	case sex:
	printf("Sexta-Feira -- 6\n");	
	break;
	
	case sab:
	printf("Sábado -- 7\n");	
	break;
	
	default:
	printf("Valor inválido\n");
	
	}
	return 0;
}
