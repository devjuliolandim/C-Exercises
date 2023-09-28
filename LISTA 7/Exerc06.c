#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	enum meses{jan= 1, fev, abr, mar, mai, jun, jul, ago, set, out, nov, dez}meses;

	printf("Digite um número\n");
	int num;
	scanf("%d", &num);
	
	meses = num;
	
	switch(meses){
	
	case jan:
	printf("Janeiro! Esse mês possui 31 dias!\n");
	break;
	
	case fev:
	printf("Fevereiro! Esse mês possui 28 dias!\n");
	break;
	
	case mar:
	printf("Março! Esse mês possui 31 dias!\n");
	break;
	
	case abr:
	printf("Abril! Esse mês possui 30 dias!\n");
	break;
	
	case mai:
	printf("Maio! Esse mês possui 31 dias!\n");
	break;
	
	case jun:
	printf("Junho! Esse mês possui 30 dias!\n");
	break;
	
	case jul:
	printf("Julho! Esse mês possui 31 dias!\n");
	break;
	
	case ago:
	printf("Agosto! Esse mês possui 31 dias!\n");
	break;
	
	case set:
	printf("Setembro! Esse mês possui 30 dias!\n");
	break;
	
	case out:
	printf("Outubro! Esse mês possui 31 dias!\n");
	break;
	
	case nov:
	printf("Novembro! Esse mês possui 30 dias!\n");
	break;

	case dez:
	printf("Dezembro! Esse mês possui 31 dias!\n");
	break;
	
	default:
	printf("Valor inválido\n");
	
	
	}
	
	return 0;
}

