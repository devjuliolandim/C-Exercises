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
	
	printf("Digite a posição 'X'\n");
	scanf("%d", &lugar.x);

	printf("Digite a posição 'Y'\n");
	scanf("%d", &lugar.y);
	
	//Calcular a distância da origem:
	// x² + y² = dist²
	
	float distancia = sqrt(pow(lugar.x, 2) + pow(lugar.y, 2));
	
	printf("A distância do ponto (%d,%d) da origem é: %.1f\n", lugar.x, lugar.y, distancia);
	
	
	
	return 0;
}
