#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	enum meses{jan= 1, fev, abr, mar, mai, jun, jul, ago, set, out, nov, dez}meses;

	printf("Digite um n�mero\n");
	int num;
	scanf("%d", &num);
	
	meses = num;
	
	switch(meses){
	
	case jan:
	printf("Janeiro! Esse m�s possui 31 dias!\n");
	break;
	
	case fev:
	printf("Fevereiro! Esse m�s possui 28 dias!\n");
	break;
	
	case mar:
	printf("Mar�o! Esse m�s possui 31 dias!\n");
	break;
	
	case abr:
	printf("Abril! Esse m�s possui 30 dias!\n");
	break;
	
	case mai:
	printf("Maio! Esse m�s possui 31 dias!\n");
	break;
	
	case jun:
	printf("Junho! Esse m�s possui 30 dias!\n");
	break;
	
	case jul:
	printf("Julho! Esse m�s possui 31 dias!\n");
	break;
	
	case ago:
	printf("Agosto! Esse m�s possui 31 dias!\n");
	break;
	
	case set:
	printf("Setembro! Esse m�s possui 30 dias!\n");
	break;
	
	case out:
	printf("Outubro! Esse m�s possui 31 dias!\n");
	break;
	
	case nov:
	printf("Novembro! Esse m�s possui 30 dias!\n");
	break;

	case dez:
	printf("Dezembro! Esse m�s possui 31 dias!\n");
	break;
	
	default:
	printf("Valor inv�lido\n");
	
	
	}
	
	return 0;
}

