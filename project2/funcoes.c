#include <stdio.h>
#include <math.h>
#include "funcoes.h"

//static int x
static float area;
static float quantidade;
static float caixa = 2.5;
static float consumo;
static float distancia;

int imc(float a, float b){
	printf("%f", (a/(b*b)));
	return 0;
};

int _caixa(float largura, float comprimento, float preco){
	area = largura*comprimento;
	quantidade = (area/caixa);
	preco = preco * quantidade;
	
	printf("Área total a ser revestida: %.2f\n.", area);
	printf("Quantidade de caixas necessárias: %.2f\n", quantidade);
	printf("Montante total da compra: R$%.2f", preco);
	
	return 0;
}

void contador(int a, int b){
	printf("Total de produtos recebidos: %d", (a+b));
}

void relogio(int hora, int minuto){
	minuto = minuto + (hora*60);
	
	printf("Já se passaram %d desde o início do dia.", minuto);
}

void _consumo(float a, float b){
	consumo = (a*b*30)/1000;
	
	printf("Consumo mensal: %.2f", consumo);
}

void coordenada(float x1, float x2, float y1, float y2){
	distancia = sqrtf(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	
	printf("A distância entre os porntos: %.2f", distancia);
}
