#include <stdio.h>

int main() {
  int valores[10], negativos = 0, maior, menor, soma = 0;
  float media;

  
  for (int i = 0; i < 10; i++) {
    printf("Digite o %do valor: ", i+1);
    scanf("%d", &valores[i]);

   
    if (valores[i] < 0) {
      negativos++;
    }

    
    if (i == 0) {
      maior = valores[i];
      menor = valores[i];
    } else {
      if (valores[i] > maior) {
        maior = valores[i];
      } else if (valores[i] < menor) {
        menor = valores[i];
      }
    }

   
    soma += valores[i];
  }


  media = soma / 10.0;

  printf("Quantidade de valores negativos: %d\n", negativos);
  printf("Maior valor: %d\n", maior);
  printf("Menor valor: %d\n", menor);
  printf("Soma: %d\n", soma);
  printf("M�dia aritm�tica: %.2f\n", media);

  return 0;
}

