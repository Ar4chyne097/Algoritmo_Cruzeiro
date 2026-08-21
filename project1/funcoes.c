#include <stdio.h>
#include "funcoes.h"

int soma(int a, int b, char *mensagem){
	printf("%s %d\n", mensagem, a+b);
	return 0;
}

int subtracao(int a, int b, char *mensagem){
	printf("%s %d\n", mensagem, a-b);
	return 0;
}

float produto(float a, float b, char *mensagem){
	printf("%s %.2f \n", mensagem, a*b);
	return 0;
}

float razao(float a, float b, char *mensagem){
	printf("%s %.2f \n", mensagem, a/b);
	return 0;
}
