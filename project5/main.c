#include <stdio.h>

int main(int argc, char** argv) {
	//Exercício 1
	/*int a[4], i;
	
	for(i = 0; i < 4; i++){
		printf("Digite o valor do %dº salário:", i+1);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < 4; i++){
		printf("\nSalário número %d: %d", (i+1), a[i]);
	}*/
	
	//Exercício 2
	/*int a[8], i;
	float media;
	
	for(i = 0; i < 8; i++){
		printf("Digite o valor do %d° número:", i+1);
		scanf("%d", &a[i]);
		media = media + a[i];
	}
	
	media = (media/i);
	
	
	for(i = 0; i < 8; i++){
		if(a[i] > media){
			printf("\nNúmero acima da média: %d", a[i]);
		}
	}*/
	
	//Exercício 3
	/*int a[6], i, contador = 0;
	float media;
	
	for(i = 0; i < 6; i++){
		printf("Digite o valor do %d° salário:", i+1);
		scanf("%d", &a[i]);
		media = media + a[i];
	}
	
	media = (media/i);
	
	
	for(i = 0; i < 6; i++){
		if(a[i] > media){
			printf("\nSalário acima da média: %d", a[i]);
		}else{
			contador = contador + 1;
		}
	}
	
	printf("\nSalários abaixo da média: %d", contador);*/
	
	//Exercício 4
	/*int a[3][4], i, j, total1, total2, total3;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			printf("Valor dos valores do produto %d vendidos do dia %d:", i+1, j+1);
			scanf("%d", &a[i][j]);
			
			if(j == 0){
				total1 = total1 + a[i][j];
			}else if(j == 1){
				total2 = total2 + a[i][j];
			}else if(j ==2){
				total3 = total3 + a[i][j];
			}
		}
	}
	
	printf("Quantidade de vendas do produto 1: %d\n", total1);
	printf("Quantidade de vendas do produto 2: %d\n", total2);
	printf("Quantidade de vendas do produto 3: %d\n", total3);
	printf("Quantidade de vendas dos 3 produtos: %d\n", (total1+total2+total3));*/
	
	//Exercício 5
	/*int a[3][4], i, j, maior;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			printf("Digite a %dª nota do %dº aluno:", i+1, j+1);
			scanf("%d", &a[i][j]);
			
			if(i == 0 && j == 0){
				maior = a[i][j];
			}else if(a[i][j] > maior){
				maior = a[i][j];
			}
		}
	}
	
	printf("A maior nota foi a: %d", maior);*/
	
	//Exercício 6
	/*int a[7], i, contador = 0;
	float media, maior, menor;
	
	for(i = 0; i < 7; i++){
		printf("Digite o valor da temperatura do %dº dia:", i+1);
		scanf("%d", &a[i]);
		media = media + a[i];
	}
	
	menor = a[0];
	maior = a[0];
	media = (media/i);
	
	
	for(i = 0; i < 7; i++){
		if(a[i] > media){
			contador = contador + 1;
		}
		
		if(a[i] > maior){
			maior = a[i];
		}
		
		if(a[i] < menor){
			menor = a[i];
		}
	}
	
	printf("Média: %.2f °C\n", media);
	printf("Maior temperatura: %.2f °C\n", maior);
	printf("Menor temperatura: %.2f °C\n", menor);
	printf("Dias acima da média: %d\n", contador);*/
	
	return 0;
}
