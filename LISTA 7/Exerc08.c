#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	typedef struct {
	int x;
	int y;
	}posicao;

	posicao lugar;
	
	printf("Digite a posi��o 'X'\n");
	scanf("%d", &lugar.x);

	printf("Digite a posi��o 'Y'\n");
	scanf("%d", &lugar.y);
	
	//Calcular a dist�ncia da origem:
	// x� + y� = dist�
	
	float distancia = sqrt(pow(lugar.x, 2) + pow(lugar.y, 2));
	
	printf("A dist�ncia do ponto (%d,%d) da origem �: %.1f\n", lugar.x, lugar.y, distancia);
	
	
	
	return 0;
}
