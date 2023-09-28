#include <stdio.h>

int main(){

	char string[100];
	printf("Digite uma string!\n");
	scanf("%[^\n]s", &string);


	printf("\n\nA string digitada foi:  ");
	printf("%s\n", string);




	return 0;
}
