#include<stdio.h>
#include<string.h>
int main(){

	printf("Digite a primeira string!\n");
	char string1[100];
	scanf("%[^\n]", string1);
	fflush(stdin);
	printf("Digite a segunda string!\n");
	char string2[100];
	scanf("%[^\n]", string2);

	int len1= strlen(string1);
	int len2= strlen(string2);

	if(len1<len2){
	printf("A segunda string e' maior do que a primeira\n");
	}if(len1>len2){
	printf("A primeira string e' maior do que a segunda\n");
	}if(len1==len2){
	printf("As strings tem o mesmo tamanho\n");
	}


	int comparacao = strcmp(string1, string2);
		if(comparacao == 0){
		printf("As strings sao iguais na ordem ortografica!\n");
		} else if(comparacao>0){
		printf("A primeira string vem depois da segunda na ordem!\n");
		} else{
		printf("A primeira string vem antes da segunda!\n");
		}


	return 0;
}
