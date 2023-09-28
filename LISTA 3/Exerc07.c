#include <stdio.h>

int main(){

	int A, B;

	printf("Digite o primeiro numeral!\n");
	scanf("%d", &A);
	printf("Digite o segundo numeral!\n");
	scanf("%d", &B);
	
	if(A% B == 0){
	printf("A e' divisivel por B\n");
	}else{
	printf("A n e' divisivel por B\n");
	}

}
