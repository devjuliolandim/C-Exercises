#include<stdio.h>

int main(){

	int matriz[3][3], l, c;
		

	printf("Digite os valores da matriz 3x3\n");
	for(int l = 0; l<3; l++){
		for(c = 0; c<3; c++){
			printf("Linha %d: ", l+1);
			scanf("%d", &matriz[l][c]);
		}
	}
	printf("\n---RESULTADO!---\n");
	for(int l = 0; l<3; l++){
		for(c=0; c<3; c++){
			printf("%d", matriz[l][c]);
		}
		printf("\n");
	}


	return 0;
}
