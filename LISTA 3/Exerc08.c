#include <stdio.h>

int main(){

	float i, j;
	
	printf("Digite o salario\n");
	scanf("%f", &i);

	if(i<=600){
	j = i * 1.3;
	}
	
	else if(i<=1100){
	j = i * 1.25;
	}
	else if (i<=2400){
	j = i * 1.2;
	} 
	else if (i<=3550){
	j = i * 1.15;
	}
	else if (i>3550){
	j = i * 1.1;
	}
	
	printf("Valor atualizado:%.2f\n", j);
}
