#include <stdio.h>

int main(int argc, char** argv) {
	//EX 1
	/*int a, i;
	
	FILE *arquivo;
	//arquivo = fopen("tabuada.txt", "w");
	arquivo = fopen("tabuada.txt", "w");
	
	if(arquivo == NULL){
		printf("Não foi possível abrir o arquivo!");
		return 1;
	}
	
	printf("Digite um número:");
	scanf("%d", &a);
	
	for(i = 0; i <= 10; i++){
		fprintf(arquivo, "%d\n", a*i);
		printf("%d\n", a*i);
	}
	
	fclose(arquivo);*/
	
	//EX 2
	/*FILE *arquivo = fopen("./saidas/consumo.txt", "w");
	if(arquivo == NULL){
		printf("ERRO! Não foi possível abrir o arquivo");
	}
	
	int i;
	char dia[20];
	float agua;
	
	for(i = 0; i < 3; i++){
		printf("Digite o dia da semana:");
		scanf("%s", dia);
		
		printf("Digite o consumo do dia de água:");
		scanf("%f", &agua);
		
		fprintf(arquivo, "Dia: %s Consumo: %.2f\n", dia, agua);
	}
	
	fclose(arquivo);*/
	
	//EX 3
	/*int valor, i;
	FILE *arquivo = fopen("./saidas/tabuada.txt", "r");
	if(arquivo == NULL){
		printf("Não foi possível abrir o arquivo!");
		return 1;
	}
	
	for(i = 0; i <= 10; i++){
		fscanf(arquivo, "%d\n", &valor);
		printf("%d\n", valor);
	}
	
	fclose(arquivo);*/
	
	//EX 4
	/*int escola, i;
	
	FILE *arquivo = fopen("./saidas/notas.txt", "w");
	if(arquivo == NULL){
		printf("ERRO! Não foi possível abrir o arquivo");
	}
	
	float id_aluno[3], nota[3], soma = 0, maior = 0;
	
	for(i = 0; i < 3; i++){
		printf("Digite o seu RGM: ");
		scanf("%f", &id_aluno[i]);
		
		printf("Digite a sua nota: ");
		scanf("%f", &nota[i]);
		
		soma = soma + nota[i];
		
		if(maior < nota[i]){
			maior = nota[i];
		}
	}
	
	fprintf(arquivo, "Quantidade de estudantes: %d\n", (sizeof(id_aluno)/sizeof(id_aluno[0])));
	fprintf(arquivo, "Maior nota: %.2f\n", maior);
	fprintf(arquivo, "Média das notas gerais %.2f\n:", (soma/3));
	
	fclose(arquivo);*/
	
	//EX 5
	/*FILE *arquivo = fopen("./saidas/vendas.txt", "w");
	if(arquivo == NULL){
		printf("ERRO! Não foi possível abrir o arquivo");
	}
	
	int i;
	float qtn[3], valor[3], soma = 0, maior = 0;
	
	for(i = 0; i < 3; i++){
		printf("Digite a quantidade de vendas do dia: ");
		scanf("%f", &qtn[i]);
		
		printf("Digite o valor adquirido com as vendas:");
		scanf("%f", &valor[i]);
		
		soma = soma + valor[i];
		
		if(maior < valor[i]){
			maior = valor[i];
		}
	}
	
	fprintf(arquivo, "Quantidade de estudantes: %d\n", (sizeof(qtn)/sizeof(qtn[0])));
	fprintf(arquivo, "Maior valor das vendas: %.2f\n", maior);
	fprintf(arquivo, "Total das vendas: %.2f\n", (soma));
	
	fclose(arquivo);*/
	
	return 0;
}
