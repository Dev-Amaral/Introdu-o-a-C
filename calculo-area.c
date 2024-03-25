#include<stdio.h>

int main()
{
    float base, altura;
    printf("Digite a base\n");
    scanf("%f",& base);
    printf("Digite a altura\n");
    scanf("%f",& altura);  
    printf ("Perimetro= %f \nArea= %f",2*base+2*altura, base*altura);
    
    return 0;
}