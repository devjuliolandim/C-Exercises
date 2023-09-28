#include<stdio.h>
#include<locale.h>


	int fatorial(int N){
	
	int resultado = 1;
		
		if(N == 1 || N == 0){
			resultado = 1;	
		
		}
		else{
		resultado =	fatorial(N - 1) * (N);
		
		
		}
	
		return resultado;
	}


int main(){

	setlocale(LC_ALL, "Portuguese");

	int num;
	
	printf("Digite o número a ser calculado o fatorial:");
	scanf("%d", &num);

	int resultado = fatorial(num);
	printf("\n%d",resultado );

	return 0;
}

