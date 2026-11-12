#include <stdio.h>
#include "functions.h"

int main(int argc, char** argv) {
	float saldo = 1500, *ponteiro, saque;
	
	ponteiro = &saldo;
	
	modificar(ponteiro, saque);
}
