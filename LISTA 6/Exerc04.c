#include<stdio.h>
#include<ctype.h>
int main(){

	printf("Digite uma string!\n");
	char string[100];
	scanf(" %[^\n]", string);
	int contador = 0;
	
	for(int i = 0; string[i]!= '\0'; i++){
		contador++;
	}
	
	printf("\n\nSua string reversa com todas as letras maiusculas e':\n");
	for(int i = contador - 1; i>=0; i--){
		printf("%c", toupper(string[i]));
	}
	
	return 0;
}
