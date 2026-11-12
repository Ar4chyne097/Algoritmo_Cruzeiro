#include <stdio.h>
#include "functions.h"

static float saque;

int modificar(float *dinheiro, float saque){
	printf("Digite o valor do saque:");
	scanf("%f", &saque);
	
	if(saque <= *dinheiro){
		printf("Saldo modificado com sucesso para o valor de: %.2f!", *dinheiro-saque);
	}else{
		printf("ERRO! Valor do seu saldo é insuficiente para realizar o saque!");
	}
	
	return 0;
}
