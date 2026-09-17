#include <stdio.h>
#include "function.h"

static char* comida[4] = {"hamburguer", "chessburguer","cachorro quente", "sanduíchue"};
static char* bebida[2] = {"refrigerante", "suco de laranja"};
static char* sobremesa[3] = {"milk shake", "sundae", "casquinha"};

static float _peso;

static char* meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

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

void peso(char a, float b){
	if(b != 0.0){
		if(a == 'M'){
			_peso = ((72.7 * b) - 58);
			printf("Seu peso ideal é: %.2f", _peso);
		}else if(a == 'F'){
			_peso = ((62.1 * b) - 44.7);
			printf("Seu peso ideal é: %.2f", _peso);
		}
	}else{
		printf("ERRO! Altura inválida. Tente novamente.");
	}
}

void calendario(int a){
	int i;
	if(a > 12 || a < 1){
		printf("ERRO! TENTE NOVAMENTE.");
	}else{
		for(i = 0; i < 12; i++){
			if(i == a-1){
				printf("%s",meses[i]);
			}
		}
	}
}

void comparacao(int a, int b, int c){
	int d = a + b;
	
	if(d < c){
		printf("A+B < C");
	}else if(d > c){
		printf("A+B > C");
	}else{
		printf("A+B = C");
	}
}
