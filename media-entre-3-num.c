#include <stdio.h>
int main(){
	
	float num1,num2,num3;
	printf("Digite o primeiro valor\n");
	scanf("%f",&num1);
	
	printf("Digite o segundo valor\n");
	scanf("%f",&num2);
	
	printf("Digite o terceiro valor\n");
	scanf("%f",&num3);
	
	printf("Media aritmetica: %f",(num1+num2+num3)/3);
	return 0;
}