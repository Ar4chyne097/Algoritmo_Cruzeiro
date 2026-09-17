#include <stdio.h>
#include "function.h"

static char* comida[4] = {"hamburguer", "chessburguer","cachorro quente", "sanduíchue"};
static char* bebida[2] = {"refrigerante", "suco de laranja"};
static char* sobremesa[3] = {"milk shake", "sundae", "casquinha"};

void escolha(int a, int b, int c){
	switch(a){
		case 1:
			printf("Sua comida: %s\n", comida[0]);
			break;
		case 2:
			printf("Sua comida: %s\n", comida[1]);
			break;
		case 3:
			printf("Sua comida: %s\n", comida[2]);
			break;
		case 4:
			printf("Sua comida: %s\n", comida[3]);
			break;
		default:
			break;
	}
	
	switch(b){
		case 5:
			printf("Sua bebida: %s\n", bebida[0]);
			break;
		case 6:
			printf("Sua bebida: %s\n", bebida[1]);
			break;
		default:
			break;
	}
	
	switch(c){
		case 7:
			printf("Sua sobremesa: %s\n", sobremesa[0]);
			break;
		case 8:
			printf("Sua sobremesa: %s\n", sobremesa[1]);
			break;
		case 9:
			printf("Sua sobremesa: %s\n", sobremesa[2]);
			break;
		default:
			break;
	}
}

void moeda(int a, float b){
	switch(a){
		case 1:
			printf("libra esterlina - %f", b);
			break;
		case 2:
			printf("franco suíço - %f", b);
			break;
		case 3: 
			printf("dólar estadunidense - $ %f", b);
			break;
		case 4:
			printf("marco alemão - %f", b);
			break;
		case 5:
			printf("real - R$ %f", b);
			break;
	}
}
