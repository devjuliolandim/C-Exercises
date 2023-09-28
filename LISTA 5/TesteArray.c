#include <stdio.h>

int main () { 
	int i,j;
	printf("Digite o tamanho do array de inteiros:");
	scanf(" %d",&i);
	int vet[i];
	printf("Entre com os valores para povoar o array:\n");
	for(j=0; j<i; j++)
	{
		printf("Entre com o %do. valor:",(j+1));
		scanf("%d",&vet[j]);
	}
	printf("\nFinal da entrada dados!\n");
	printf("Os valores digitados para o array foram:\n");
	for(j=0; j<i; j++)
	{
		printf("%do.) %d\n",(j+1),vet[j]);
	}
}

