#include<stdio.h>
#include<locale.h>

	int NFibonacci(int N){

		if(N == 0){
			return 0;
		}	
		else if(N==1){
			return 1;
		}
		else{
			return NFibonacci(N - 1) + NFibonacci(N - 2);
		}
	
	
	
	
	
	}

int main(){

	setlocale(LC_ALL, "Portuguese");

	int N;
	printf("Digite um valor inteiro positivo entre 0 e 46:");
	scanf("%d", &N);
	
	printf("Os %d primeiros números da série de Fibonacci são:\n", N);
	
	for(int i =0; i<N; i++){
		int fibonacci = NFibonacci(i);
		printf("%d ", fibonacci);
	
	
	}

	return 0;
}

