#include<stdio.h>
#include<locale.h>

	int potencia(int x, int y){
		int resultado = 1;
	
	while(y>0){
		resultado *= x;
		y--;	
		}
	
		return resultado;
	}


int main(){

	setlocale(LC_ALL, "Portuguese");

	int base, expoente;
	
	printf("Digite a base:");
	scanf("%d", &base);

	printf("Digite o expoente:");
	scanf("%d", &expoente);

	int resultado = potencia(base, expoente);
	printf("O resultado é: %d", resultado);


	return 0;
}

