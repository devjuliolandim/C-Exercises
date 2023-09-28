#include<stdio.h>

int main(){

	int matriz [4][4], l, c;

	printf("Digite os valores da matriz:\n");

	for(l=0; l<4; l++){
		for(c=0;c<4; c++){
			printf("Linha %d ", l+1);
			scanf("%d", &matriz[l][c]);
		}
	}

	printf("A sua matriz e':\n");
	
	int soma = 0;
	
	for(l=0; l<4; l++){
		for(c=0;c<4; c++){
			printf("%d ", matriz[l][c]);
			if(l==c){
			soma += matriz[l][c];
			}
		
		}
		printf("\n");
	}
	
	
	printf("\n\nA soma dos numeros na diagonal principal e': %d", soma);
	
	return 0;
}
