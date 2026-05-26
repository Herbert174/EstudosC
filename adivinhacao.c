#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//#define NUMERO_TENTATIVAS 5

int main()
{

    printf("\n");
    printf("          P  /_\\  P \n");     
    printf("         /_\\_|_|_/_\\ \n"); 
    printf("     n_n | ||. .|| | n_n         Bem vindo ao \n"); 
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n"); 
    printf("    |" "  |  |_|  |"  " | \n"); 
    printf("    |_____| ' _ ' |_____| \n"); 
    printf("          \\__|_|__/ \n");  
    printf("\n\n");
                          
    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;    //% para pegar o resto da divisão 10/3 = 3,3333 (resto 3333)
    /*int idade;
    idade = 26;*/
    int palpite;
    //int ganhou = 0;
    int acertou = 0;
    int tentativas = 1;
    int numerotentativas;
    double pontos = 1000;
    double pontosperdidos = 0;

    int nivel;

    printf("Qual o nivel de dificuldade?\n");
    printf("(1) Facil, (2) Medio, (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    switch(nivel)
        {
        case 1:
            numerotentativas = 30;
            break;

        case 2:
            numerotentativas = 15;
            break;

        case 3:
            numerotentativas = 5;
            break;

        default:
            numerotentativas = 30;
            break;
        }

    //while(ganhou == 0)
    for(int i = 1; i <= numerotentativas; i++)
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
        
        acertou = palpite == numerosecreto;
        int maior = palpite > numerosecreto;
        int menor = palpite < numerosecreto;
        //printf("Acerto: %d\n", acertou);

        //printf("Voce errou, o numero secreto era %d \n", numerosecreto);
        //printf("O numero secreto e o %d nao conta para ninguem\n", numerosecreto);

        if(acertou)
            {
            printf("\n");
            printf("             OOOOOOOOOOO \n");
            printf("         OOOOOOOOOOOOOOOOOOO \n");
            printf("      OOOOOO  OOOOOOOOO  OOOOOO \n");
            printf("    OOOOOO      OOOOO      OOOOOO \n");
            printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO \n");
            printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
            printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO \n");
            printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO \n");
            printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO \n");
            printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO \n");
            printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO \n");
            printf("      OOOOOO   OOOOOOOOO   OOOOOO \n");
            printf("         OOOOOO         OOOOOO \n");
            printf("             OOOOOOOOOOOO \n");
            printf("\n");

            printf("Parabens voce acertou!\n\n");
            printf("Voce acertou em %d tentativas!\n", tentativas);
            printf("Total de pontos : %.1f\n", pontos); //%d não suporta variaveis double, para eles usar %f
            //utilizar o .1f para para o compilar o tanto de casas depois da virgula queremos imprimir
            //ganhou = 1; 
            break;
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

    if(acertou)
        {
        printf("Numero de tentativas %d\n", tentativas);
        }else{
            printf("       \\|/ ____ \\|/ \n");
            printf("        @~/ ,. \\~@ \n");
            printf("       /_( \\__/ )_\\ \n");
            printf("          \\__U_/ \n");
            printf("\n");

            printf("Voce esgotou o numero de tentativas\n");
            }

    printf("Fim de jogo \n");
     
}             