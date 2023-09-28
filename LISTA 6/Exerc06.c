#include<stdio.h>
#include<string.h>

int main(){

	printf("Digite uma string!\n");
	char string[100];
	scanf(" %[^\n]", string);
	
	char vogais[11]= {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', '\0'};
	int qntdvogal = 0;

	for(int i = 0; string[i] !='\0'; i++){
		for(int j = 0; vogais[j] != '\0'; j++){
			if(string[i]==vogais[j]){
			qntdvogal++;
			break;
			}
		}
			
	
	}


	char consoante = 'c';
	int novaqntdvogal = 0;

	for(int i= 0; string[i]!='\0'; i++){
		for(int j = 0; vogais[j] != '\0'; j++){
			if(string[i]==vogais[j]){
			string[i] = consoante;
			
			}
		}
	
	
	}
	
	printf("\nUtlizando um caractere qualquer a nova string fica assim: %s\n", string);
	
	for(int i = 0; string[i] !='\0'; i++){
		for(int j = 0; vogais[j] != '\0'; j++){
			if(string[i]==vogais[j]){
			novaqntdvogal++;
			break;
			}
		}
			
	
	}
	
	
	printf("\nA nova string possui: %d vogal/vogais!\n", novaqntdvogal);
	
	return 0;
}
