#include <stdio.h>
#include "function.h"

int main(int argc, char** argv) {
	//Exercício 1
	/*char* sobremesa[3] = {"milk shake", "sundae", "casquinha"};
	printf("%s", sobremesa[0]);*/
	
	/*int a1, a2, a3;
	
	printf("Escolha sua comida: ");
	scanf("%d", &a1);
	
	printf("Escolha sua bebida: ");
	scanf("%d", &a2);
	
	printf("Escolha sua sobremesa: ");
	scanf("%d", &a3);
	
	escolha(a1, a2, a3);
	
	return 0;*/
	
	//Exercício 2
	/*int nome;
	float valor;
	
	printf("Digite o número da moeda:");
	scanf("%d", &nome);
	
	printf("Digite o valor:");
	scanf("%f", &valor);
	
	moeda(nome, valor);*/
	
	//Exercício 3
	/*char sexo;
	float altura;
	
	printf("M = Masculino \n");
	printf("F = Feminino \n");
	
	printf("Digite seu sexo:");
	scanf("%s", &sexo);
	
	printf("Digite sua altura:");
	scanf("%f", &altura);
	
	peso(sexo, altura);*/
	
	//Exercício 4
	/*int mes;
	
	printf("Digite o número do mês requerido:");
	scanf("%d", &mes);
	
	calendario(mes);
	
	return 0;*/
	
	//Exercício 5
	/*int a,b,c;
	
	printf("Digite o valor de A:");
	scanf("%d", &a);
	
	printf("Digite o valor de B:");
	scanf("%d", &b);
	
	printf("Digite o valor de C:");
	scanf("%d", &c);
	
	comparacao(a, b, c);*/
	
	//Exercício 6
	/*int a, b, c;
	printf("Digite o valor de A:");
	scanf("%d", &a);
	
	printf("Digite o valor de B:");
	scanf("%d", &b);
	
	if(a == b){
		c = a+b;
		printf("%d",c);
	}else{
		c = a*b;
		printf("%d",c);
	}*/
	
	//Exercício 7
	/*int a,b,c,d;
	
	printf("Digite o valor do primeiro número:");
	scanf("%d", &a);
	
	printf("Digite o valor do segundo número:");
	scanf("%d", &b);
	
	printf("Digite o valor do terceiro número:");
	scanf("%d", &c);
	
	printf("Digite o valor do quarto número:");
	scanf("%d", &d);
	
	if(a > b){
		if(a > c){
			if(a > d){
				printf("O maior número é: %d", a);
			}
		}else{
			if(c > d){
				printf("O maior número é: %d", c);
			}else{
				printf("O maior número é: %d", d);
			}
		}
	}else{
		if(b > c){
			if(b > d){
				printf("O maior número é: %d", b);
			}
		}else{
			if(c > d){
				printf("O maior número é: %d", c);
			}else{
				printf("O maior número é: %d", d);
			}
		}
	}*/
	
	//Exercício 8
	/*int a[3];
	
	printf("Digite o valor do primeiro número:");
	scanf("%d", &a[0]);
	
	printf("Digite o valor do segundo número:");
	scanf("%d", &a[1]);
	
	printf("Digite o valor do terceiro número:");
	scanf("%d", &a[2]);
	
	int i, menor, medio, maior;
	for(i = 0; i < 3; i++){
		if(a[i] < menor){
			menor = a[i];
	 	}else{
			if(a[1] > medio){
				medio = a[1];
			}else{
				maior = a[i];
			}
		}
	};*/
	
	printf("%d %d %d", menor, medio, maior);
};
