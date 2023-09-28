#include <stdio.h>

int main() {
	int numero;
	int divisao = 0;
  	char c;
 
 do{
 printf("Escolha um numero inteiro menor do que 100 para descobrirmos os multiplos\n");
 scanf("%d", &numero);
 }while(numero>100 || numero<0);
 
 for(divisao = 0; divisao <= 100; divisao++){
 if(divisao%numero==0){
 printf("%d\n", divisao);
 }
 }
}
