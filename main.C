#include<stdio.h>

    float a,b;

    int somar(){
        return (a+b);
    }

int main()
{
    float resposta;

    printf("\nDigite o primeiro numero");
    scanf("%f",&a);
    printf("\n");
    printf("\nDigite o segundo numero");
    scanf("%f",&b);
    printf("\n");
    resposta = somar();
    printf("a soma é %.0f",resposta);

    return 0;
}

