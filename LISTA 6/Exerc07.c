#include<stdio.h>
#include<string.h>

int main(){

	printf("Digite uma string!\n");
	char string[100];
	scanf(" %[^\n]", string);
	int caracter = strlen(string);
	
	char stringinversa[100];
	int j;
	for(int i = caracter - 1, j = 0; i>= 0; i--, j++){
		stringinversa[j]= string[i];
	}


	int iguais = 0;

	iguais = strcmp(string, stringinversa);

	if(iguais == 0){
		printf("\nE' um palindromo!!!!\n");
	}else{
		printf("\nNao e' um palindromo!!!!\n");
	}




	return 0; 
}
