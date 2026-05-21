#include <stdio.h>

int main()
{
    int contador = 1;
    int resultado = 0;
    int numerotabuada;

    printf("Escolha um numero para a tabuada \n");
    scanf("%d", &numerotabuada);
    while(contador <=10)
        {
        resultado = numerotabuada * contador; 
        printf("%d * %d = %d\n", numerotabuada, contador, resultado);
        contador++;
        }

}