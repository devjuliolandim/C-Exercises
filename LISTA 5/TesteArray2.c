#include <stdio.h>
#define N 20

int main () { 
	int i,j;
	double val;
	printf("Digite a quantidade de valores para a media:");
	scanf(" %d",&i);
	long double vet[N];
	printf("Entre com os valores para povoar o array:\n");
	for(j=0; j<i; j++)
	{
		printf("Entre com o %do. valor:",(j+1));
		scanf("%lf",&vet[j]);
	}
	printf("\nFinal da entrada dados!\n");
	double somatorio = 0.0, media;
	//printf("Os valores digitados para o array foram:\n");
	for(j=0; j<i; j++)
	{
		somatorio = somatorio+vet[j]; //somatorio += vet[j];
	}
	media = somatorio/i;
	printf("\nA media eh: %lf", media);
}

