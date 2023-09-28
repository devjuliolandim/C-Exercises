#include <stdio.h>
#include <string.h>

int main(){
	
	char frase[100], fraseinversa[100]; 
	int lente, i, j, iguais;
	printf("Digite uma palavra\n");
	gets(frase);


	lente = strlen(frase);

	for(i = lente - 1,  j= 0; i>=0; i--, j++){
		fraseinversa[j] = frase[i];
		
	}

	fraseinversa[j]= '\0';
	iguais = strcmpi(frase, fraseinversa);

	if(iguais == 0){
		printf("Esse sentenca e' um palindromo\n");
	}else{
		printf("Esse sentenca nao e' um palindromo\n");
	}


	return 0;
}
