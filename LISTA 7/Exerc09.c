#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	union tipo{
	int a;
	float b;	
	};

	union tipo inteiro;

	inteiro.a = 42;
	
	printf("Valor flutuante é %.2f", inteiro.b);

	return 0;
}
