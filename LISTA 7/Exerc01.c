#include<stdio.h>

int main(){

	char a;
	int b;
	float c;
	double d;
	
	printf("O tamanho de bytes que char ocupa e: %zu\n", sizeof(char));
	printf("O tamanho de bytes que int ocupa e: %zu\n", sizeof(int));
	printf("O tamanho de bytes que float ocupa e: %zu\n", sizeof(float));
	printf("O tamanho de bytes que double ocupa e: %zu\n", sizeof(double));
	return 0;
}
