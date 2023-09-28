#include<stdio.h>

int main(){

	char string[100];
	int contador=0;

	printf("Digite uma string!\n");
	scanf(" %[^\n]s", string);

	for(int i = 0; string[i] != '\0'; i++){
		contador++;	
	}


	printf("Essa string tem %d caracteres!\n", contador);


	return 0;
}
