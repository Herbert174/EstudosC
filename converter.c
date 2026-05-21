#include <stdio.h>
#include <stdlib.h>

int main()
    {
    int a = 3;
    int b = 2;
    int c = abs(5);
    int d = abs(-5);
    int e = abs(3 * -3);

    double pontos = a / (double)b; //(double) para fazer um cast na varievel e a converter em double
    printf("%f\n", pontos);

    printf("%d %d\n", c, d);
    printf("%d\n", e);
    }