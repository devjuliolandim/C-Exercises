#include<stdio.h>
#include<string.h>

int main(){

	printf("Digite uma string!\n");	
	char string[100];
	scanf(" %[^\n]", string);
	int contador = strlen(string);

	printf("A sua string invertida e':\n");
	for(int i = contador - 1; i>=0; i--){
		printf("%c", string[i]);
	}


	return 0;
}
