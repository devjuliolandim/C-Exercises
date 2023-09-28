#include <stdio.h>
#include <ctype.h>

int main(){

	char matriz[4][4];
	int l, c;
	int maius= 0;
	
	printf("Digite uma matriz de caracteres 4x4\n");

	for(l= 0; l<4; l++){
		for(c = 0; c < 4; c++){
			printf("Linha %d Coluna %d: ", l+1, c+1);
			scanf(" %c", &matriz[l][c]);
		
			if (isupper(matriz[l][c])){
			maius = 1;
			
			
			}
		}
	}

	
	
	
	
	printf("\nSua matriz e:\n");

for(l= 0; l<4; l++){
		for(c=0; c<4; c++){
			printf("%c ", matriz[l][c]);
			
		}
		printf("\n");
	}

	if(maius){
	printf("\nExistem letra maiusculas na matriz!\n");
	}else{
	printf("\nNao existem letra maiusculas na matriz!\n");
	}


	return 0;
}
