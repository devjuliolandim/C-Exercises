#include <stdio.h>

int main(){

	float A, B, media;

	printf("Digite sua nota 1!\n");
	scanf("%f", &A);
	
	printf("Digite sua nota 2!\n");
	scanf("%f", &B);
	
	media = (A + B)/ 2;
	
	if(media >= 6){
	printf ("Parabens! Vc foi aprovado! Sua media e' %.2f\n", media);
	}else{
	printf ("Vc n foi aprovado. Sua media e' %.2f\n", media);
	}

	return 0;
}
