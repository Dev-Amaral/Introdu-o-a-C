#include <stdio.h>

int main (){
	int dividendo,divisor;
	printf("Digite o dividendo\n");
	scanf("%d",&dividendo);
	printf("Digite o divisor\n");
	scanf("%d",&divisor);
	printf("Quociente= %d\n",dividendo/divisor);
	printf("Resto da divisao= %d\n", dividendo%divisor);
	
	return 0;
}