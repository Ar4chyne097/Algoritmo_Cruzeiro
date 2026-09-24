#include <stdio.h>

int main(int argc, char** argv) {
	//Questão 1
	/*int i;
	for(i = 0; i <= 100; i++){
		printf("%d\n", i);
	}*/
	
	//Questão 2
	/*int i = 0;
	while(i < 51){
		if(i%2 == 0){
			printf("%d\n", i);
		}
		i++;
	}*/
	
	//Questão 3
	/*int i = 10;
	do{
		printf("%d\n", i);
		i--;
	}while(i >= 0);
	
	return 0;*/
	
	//Questão 4
	/*int i, a;
	printf("Digite um número:");
	scanf("%d", &a);
	
	for(i = 1; i <= 10; i++){
		printf("%d x %d = %d \n",a, i, (a*i));
	}*/
	
	//Questão 5
	/*int a, i;
	
	printf("Digite um número:");
	scanf("%d", &a);
	
	for(i = a; i > 1; i --){
		a = a + i;
	}
	
	printf("%d", a);*/
	
	//Questão 6
	/*int a[10], i1, i2;
	
	for(i1 = 0; i1 <= 9; i1++){
		printf("Digite o %dº numero:", i1+1);
		scanf("%d", &a[i1]);
	}
	
	int soma = 0;
	for(i2 = 0; i2<= 9; i2++){
		soma = soma + a[i2];
	}
	printf("A soma de todos os 10 números fornecidos é: %d", soma);*/
	
	//Questão 7
	/*int a[10], i, contagem = 0;
	
	for(i = 0; i <= 9; i++){
		printf("Digite o %d° numero:", i+1);
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i <= 9; i++){
		if(a[i] < 0){
			contagem = contagem + 1;
		}	
	}
	
	printf("A quantidade de valores negativos fornecidos foram: %d", contagem);*/
	
	//Questão 8
	/*int a[50], i, soma;
	soma = 0;
	
	printf("Digite o primeiro valor:");
	scanf("%d", &a[0]);
	
	if(a[0] == 0){
		printf("%d", soma);
	}else{
		for(i = 1; i < 50; i++){
			printf("Digite o próximo valor:");
			scanf("%d", &a[i]);
			
			if(a[i] == 0){
				break;
			}
			
			soma = soma + a[i];
		}
		soma = soma + a[0];
		printf("%d", soma);
	}*/
	
	//Questão 9
	/*int i;
	for(i = 1; i <= 33; i++){
		printf("%d\n",(3*i));
	}*/
	
	//Questão 10
	/*int i, a;
	
	printf("Digite o número limite:");
	scanf("%d", &a);
	
	for(i = 0; i <= a; i++){
		if(i % 2 != 0){
			printf("%d\n", i);
		}
	}*/
}
