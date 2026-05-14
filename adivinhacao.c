#include <stdio.h>

int main()
{
    printf("**********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação 2.0 *\n");
    printf("**********************************************\n");

    int numerosecreto = 44;
    /*int idade;
    idade = 26;*/
    int palpite;

    printf("Qual e o seu palpite? ");
    scanf("%d", &palpite);  //%d mascara para recuperar valores inteiros
    printf("Seu palpite foi %d \n", palpite);
    
    int acertou = palpite == numerosecreto;
    printf("Acerto: %d\n", acertou);

    //printf("Voce errou, o numero secreto era %d \n", numerosecreto);
    //printf("O numero secreto e o %d nao conta para ninguem\n", numerosecreto);

    if(acertou)
        {
        printf("Parabens voce acertou!\n");
        printf("Jogue novamente meu caro player\n");
        }else{
            printf("Voce errou\n");
            if(palpite < numerosecreto)
                {
                printf("O seu palpite e menor que o numero secreto\n");
                }
            if(palpite > numerosecreto)
                {
                printf("O seu palpite e maior que o numero secreto\n");
                }
            }
    
}