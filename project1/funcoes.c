#include <stdio.h>
#include "funcoes.h"

int soma(int a, int b){
	printf("Resultado: %d\n", a+b);
	return 0;
}

int subtracao(int a, int b){
	printf("Resultado: %d\n", a-b);
	return 0;
}

float perimetro(float altura, float largura){
	printf("Per�metro do jardim: %f em metros quadrados \n", (altura+largura));
	return 0;
}

float area(float altura, float largura){
	printf("�rea do jardim: %f em metros \n", (altura*largura));
	return 0;
}