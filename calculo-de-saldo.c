#include <stdio.h>

int main (){
	float saldo;
	printf("Digite o valor da aplicacao\n");
	scanf("%f",&saldo);
	printf("Novo saldo com reajuste:\n%f",saldo*1.01);
	return 0;
}