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
	printf("Ter�a-Feira -- 3\n");	
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
	printf("S�bado -- 7\n");	
	break;
	
	default:
	printf("Valor inv�lido\n");
	
	}
	return 0;
}
