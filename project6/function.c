#include <stdio.h>
#include <math.h>
#include "function.h"

static int x[5], i, j, b, c;

void ordem(int a){
	for(i = 0; i < 5; i++){
		printf("Digite a %d° pontuação: ", (i+1));
		scanf("%d", &a);
		
		x[i] = a;
	}
	
	for(j = 0; j < 10; j++){
		for(i = 1; i <= 4; i++){
			if(x[i] > x[i-1]){
				b = x[i];
				c = x[i-1];
				x[i-1] = b;
				x[i] = c;
			}
		}
	}
	
	i = 0;
	while(i < 5){
		printf("%d\n", x[i]);
		i = i + 1;
	}
}
