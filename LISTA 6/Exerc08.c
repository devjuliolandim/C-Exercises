#include<stdio.h>
#include<string.h>

int main(){

	printf("Digite a primeira string!\n");
	char string1[100];
	scanf(" %[^\n]", string1);

	printf("Digite a segunda string!\n");
	char string2[100];
	scanf(" %[^\n]", string2);

	int len1= strlen(string1);
	int len2= strlen(string2);
	
	int contador = 0;

	for(int i = 0; i < len1; i++){
	if(string1[i]== string2[0] && i + len2 <= len1){
	
		int estacontido = 1;
	
	
		for(int j = i; j <len2 && estacontido; j++){
			if (string1[j] != string2[j]){
				estacontido = 0;
			}
			
		}
	
		if(estacontido){
			contador++;
		}
	}
	
	
	
	}
	
	
	
	printf("\n\nA quantidade de vezes que a segunda string aparece na primera e' %d!\n", contador);
	return 0;
}
