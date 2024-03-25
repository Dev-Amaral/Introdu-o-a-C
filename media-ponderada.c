#include<stdio.h>

int main()
{
    int valor1, valor2, valor3;
    printf("Digite o valor 1\n");
    scanf("%d",& valor1);
    printf("Digite o valor 2\n");
    scanf("%d",& valor2);  
    printf("Digite o valor 3\n");
    scanf("%d",& valor3);
    printf ("Media ponderada= %d", (valor1*5+valor2*3+valor3*2)/10);
   
    
    return 0;
}