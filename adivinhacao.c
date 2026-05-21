#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define NUMERO_TENTATIVAS 5

int main()
{
    printf("**********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação 2.0 *\n");
    printf("**********************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;    //% para pegar o resto da divisão 10/3 = 3,3333 (resto 3333)
    /*int idade;
    idade = 26;*/
    int palpite;
    int ganhou = 0;
    int tentativas = 1;
    double pontos = 1000;
    double pontosperdidos = 0;

    //for(int i = 1; i <= NUMERO_TENTATIVAS; i++)
    while(ganhou == 0)
        {
        //printf("Tentativa %d / %d \n", i, NUMERO_TENTATIVAS);
        printf("Tentativa %d\n", tentativas);
        printf("Qual e o seu palpite? ");
        scanf("%d", &palpite);  //%d mascara para recuperar valores inteiros
        printf("Seu palpite foi %d \n", palpite);

        if(palpite < 0)
            {
            printf("Voce nao pode chutar numeros negativos!\n\n");
            //i--;
            continue; //Encerrar direto o loop (for) e ir direto para o i++
            }
        
        int acertou = palpite == numerosecreto;
        int maior = palpite > numerosecreto;
        int menor = palpite < numerosecreto;
        //printf("Acerto: %d\n", acertou);

        //printf("Voce errou, o numero secreto era %d \n", numerosecreto);
        //printf("O numero secreto e o %d nao conta para ninguem\n", numerosecreto);

        if(acertou)
            {
            printf("Parabens voce acertou!\n\n");
            ganhou = 1;
            //break;
            }else{
                tentativas = tentativas + 1;
                printf("Voce errou\n");
                if(maior)
                    {
                    printf("O seu palpite e maior que o numero secreto\n\n");
                    pontosperdidos = (palpite - numerosecreto) / 2.0;  
                    } //o compilador inicia da direita para a esquerda logo se tivessemos apenas deixa 2 a 
                      // equação poderia ser entendida como com um resultado guardado em uma variavel do tipo int
                else if(menor)
                    {
                    printf("O seu palpite e menor que o numero secreto\n\n");
                    pontosperdidos = (numerosecreto - palpite) / 2.0;
                    }
                }
        //pontosperdidos = (palpite - numerosecreto) / 2;
        pontos = pontos - pontosperdidos;
        }


    printf("Fim de jogo \n");
    printf("Voce acertou em %d tentativas!\n", tentativas);
    printf("Total de pontos : %.1f\n", pontos); //%d não suporta variaveis double, para eles usar %f
}             //utilizar o .1f para para o compilar o tanto de casas depois da virgula queremos imprimir