#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int array[5];

	int *p = array;

	for(int i = 0; i<5; i++){
		scanf("%d", (p+i));
	}


	printf("\n\n");
	for(int i = 0; i<5; i++){
		printf("%d\n", *(p+i)*2);
	}

	return 0;
}
