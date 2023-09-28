#include <stdio.h>

int main(){

int alunos, i;
float N1, P1, N2, P2, media;

	printf("Digite o num. de alunos\n");
	scanf("%d", &alunos);


for(i= 0; i<alunos; i++){
 printf("Alunos: %d\n", alunos);

	printf("Digite a primeira nota\n");
	scanf("%f", &N1);
	
	printf("Digite o primeiro peso\n");
	scanf("%f", &P1);
	
	printf("Digite a segunda nota\n");
	scanf("%f", &N2);
	
	printf("Digite  segundo peso\n");
	scanf("%f", &P2);

	media = (P1*N1 + P2*+N2)/ (P1 + P2);
	
	printf("Media: %.2f\n", media);
	
	
	
	if(media >= 7.0){
	printf("Aprovado!\n");
	} else if(media >= 4.0){
	printf("Reprovado!\n");
	}else {
	printf("Reprovado!\n");
	}


}
 
}
