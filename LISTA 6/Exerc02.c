#include<stdio.h>

int main(){

	printf("Digite uma string!\n");
	char string[100];
	scanf("%[^\n]s", string);

	char letras[4];
	
	
	for(int i = 0; i<4; i++){
	
	letras[i] = string[i];
	
	}


	printf("As quatro primeira letras sao: %s", letras);


	return 0;
}
