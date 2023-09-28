#include<stdio.h>

int main(){

	int matriz[5][5], l, c;

	printf("Digite a sua matriz\n");
	
	
	for(int l= 0; l<5; l++){
		for(c= 0; c<5; c++){
			printf("Linha %d ", l+ 1);
			scanf("%d", &matriz[l][c]);
		
		}
	}

	int menor = matriz[0][0];

	for(int l= 0; l<5; l++){
		for(c= 0; c<5; c++){
			if(matriz[l][c]< menor){
			menor = matriz[l][c];
			}
		
		}
	}
	
	
	printf("A sua matriz e:\n");
	
	for(int l= 0; l<5; l++){
		for(c= 0; c<5; c++){
		printf("%d", matriz[l][c]);
		
		}
	printf("\n");
	}
	

	printf("O menor valor e: %d", menor);



	return 0;
}
