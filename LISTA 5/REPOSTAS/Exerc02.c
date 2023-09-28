#include<stdio.h>

int main(){

	int array[10];
	printf("Digite 10 valores inteiros\n");
	
	for(int i= 0; i<10; i++){
	printf("Valor %d: ",i+1);
	scanf("%d", &array[i]);
	}

	//Exibição dos valores
	printf("\nOs valores sao:\n\n");
	for(int i= 0; i<10; i++){
	printf("Valor %d: %d \n", i+1, array[i]);
	
	
	}


	return 0;
}
