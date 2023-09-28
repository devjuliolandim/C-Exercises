#include<stdio.h>
#include<locale.h>

	unsigned long long int fatorial(int x){
	
	unsigned long long int resultado = 1;
		
		if(x==1 || x == 0){
		resultado = 1;
		}else{
			while(x>0){
				resultado *= x;
				x--;
			}
		
		}
	
	
	return resultado ;
	}


int main(){

	setlocale(LC_ALL, "Portuguese");

	printf("Digite o número a ser calculado o fatorial: ");
	int num;
	scanf("%d", &num);

	unsigned long long int resultado = fatorial(num);
	printf("O resultado é: %llu", resultado);

	return 0;
}
