#include <stdio.h>
#include <string.h>
int main(){

char senha[10];

printf("Digite a senha\n");
scanf("%s", &senha);

if(strcmp(senha, "abacate") == 0){
	printf("ACESSO PERMITIDO\n");
}else{
	printf("ACESSO NEGADO\n");
}

	return 0;
}
