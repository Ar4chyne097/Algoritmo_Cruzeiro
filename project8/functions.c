#include <stdio.h>
#include "functions.h"

int modificar(float dinheiro){
	printf("Digite o novo saldo:");
	scanf("%f", &dinheiro);
	
	printf("Saldo modificado com sucesso para o valor de: %.2f!", dinheiro);
	
	return 0;
}
