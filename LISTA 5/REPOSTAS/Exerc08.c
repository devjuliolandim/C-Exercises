#include<stdio.h>

int main(){

	int matriz[3][3], l, c;

	printf("Digite a primeira matriz 3x3\n");

	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			printf("Linha %d: ",l+1 );
			scanf("%d", &matriz[l][c]);
		}
	}


	int matriz2[3][3], a, b;

	printf("\nDigite a segunda matriz 3x3\n");

	for(a=0; a<3; a++){
		for(b=0; b<3; b++){
			printf("Linha %d: ",a+1 );
			scanf("%d", &matriz2[a][b]);
		}
	}

	int resultado[l][c];
	
	
	for(l=0, a=0; l<3; l++, a++){
		for(c=0, b=0; c<3; c++, b++){
			resultado[l][c]=matriz[l][c] + matriz2[a][b];
		}
	}


	printf("\nResultado da soma!!!\n");	
	
	for(l=0; l<3; l++){
		for(c=0; c<3; c++){
			printf("%d",resultado[l][c]);
		}
		printf("\n");
	}


	
	
	return 0;
}
