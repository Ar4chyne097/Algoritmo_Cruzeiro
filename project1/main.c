#include <stdio.h>
#include "funcoes.h"

int main(int argc, char** argv) {
	/*int idade = 26;
	float altura = 1.75;
	char inicial = 'A';
	unsigned int id_usuario = 45500;
	
	printf("Idade: %d anos\n", idade);
	printf("Altura: %.2f metros\n", altura);
	printf("Inicial do nome: %c\n", inicial);
	printf("ID do usuï¿½rio: %u\n", id_usuario);*/
	
	/*int a = 10;
	int b = 20;*/
	
	/*int a, b;
	
	printf("A:");
	scanf("%d", &a);
	
	printf("B:");
	scanf("%d", &b);
	
	soma(a, b);
	subtracao(a, b);*/
	
	float altura, largura;
	/*float altura = 10;
	float largura = 10;*/
	char *mensagem = "Área do jardim:";
	
	printf("Altura do jardim:");
	scanf("%f", &altura);
	
	printf("Largura do jardim:");
	scanf("%f", &largura);
	
	produto(altura, largura, mensagem);
	
	mensagem = "Perímetro do jardim:";
	soma((int) altura, (int) largura, mensagem);
	
	return 0;
}
