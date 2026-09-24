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
	int a, i;
	
	printf("Digite um número:");
	scanf("%d", &a);
	
	for(i = a; i > 1; i --){
		a = a + i;
	}
	
	printf("%d", a);
}
