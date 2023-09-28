#include<stdio.h>

int main(){

int array[8], maior=0;

	printf("Digite 8 valores inteiros\n");

	for(int i = 0; i<8; i++){
	printf("Valor %d: ", i+1);
	scanf("%d", &array[i]);
	
		if(array[i]>maior){
		maior = array[i];
		
		}
	
	}

	printf("O maior valor presente no array e': %d", maior);


	return 0;
}
