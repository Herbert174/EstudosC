#include <stdio.h>

int main()
{
    int contador = 1;
    int resultado = 0;
    while(contador <=100)
        {
        resultado = resultado + contador; 
        printf("Resultado da soma %d\n", resultado);
        contador++;
        }

}