#include <stdio.h>
#include <stdlib.h>

int main(void){		
  	
	  int matriz[5][5];
	
//	Ler valores para a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
	
	int primo = 0;
	
	// Percorrer todas as linhas
	for (int i = 0; i < 5; i++) {
        // Percorrer todas as colunas
        for (int j = 0; j < 5; j++) {
        	//verifica se o número é primo
        	int num = matriz[i][j];
        	int aux = 1;
        	
        	if (num <= 1) {
        		aux = 0;
    		}

		    for (int i = 2; i <= num / 2; i++) {
		        if (num % i == 0) {
		            aux = 0;
		        }
		    }
        	
        	if (aux == 1)
                primo++;
        }
    }
    
    if(primo == 25)
    	printf("Todos os %d elementos sao primos\n", primo);
    else
		printf("Somente %d de 25 sao elementos primos\n", primo);
	
	return 0;
}
