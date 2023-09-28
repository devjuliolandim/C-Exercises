#include<stdio.h>

int main(){

float a, b, c;

	printf("Informe os valores dos segmentos de reta 'a, b, c'\n");
	scanf("%f %f %f", &a,&b,&c);
	
	if(a+b>c && a+c>b && b+c>a){
	printf("Esse triangulo existe!\n");
	if(a==b && b==c){
	printf("E e' equilatero!\n");
	} else if(a==b||a==c||b==c){
	printf("E e' isoceles!\n");
	} else{
	printf("E e' escaleno!\n");
	}
	
	} 
	else{
	printf("Esse triangulo n existe!\n");
	}


}
