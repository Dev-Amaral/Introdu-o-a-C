#include <stdio.h>
int main(){
	int valor;
	printf("Digite um numero\n");
	scanf("%d",&valor);
	printf("Antecessor: %d\nSucessor: %d",valor-1, valor+1);
	
	return 0;
}