#include <stdio.h>

int main(){

float valor1, valor2, result;
char operador;

printf("Digite o valor 1\n");
scanf("%f", &valor1);

printf("Selecione o operador aritmetico desejado '+,-,*,/'\n");
scanf("%s", &operador);

printf("Digite o valor 2\n");
scanf("%f", &valor2);


	switch(operador){
	
	case '+':
		result = valor1 + valor2;
		break;	
	case '-':	
		result = valor1 - valor2;
		break;
	case '*':
		result = valor1 * valor2;
		break;
	case '/':
		result = valor1 / valor2;
		break;		
	
}

	printf ("O resultado e' %.2f", result);

	return 0;
}
