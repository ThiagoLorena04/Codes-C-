#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>


int main (){

    printf("**********\n");
    printf("Bem vindo ao jogo do advinha\n");
    printf("**********\n");

    int nivel;
    printf("Escolha o nivel de dificuldade\n");
    printf("(1)Facil, (2) Medio e (3) Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);


    int tentativas;

    if (nivel == 1)
    {
        tentativas = 20;
    } 
    else if (nivel == 2)
    {
        tentativas = 10;
    } 
    else 
    {
        tentativas = 5;
    }
      
        
        


    // Declarando que a variável vai ser gerada de forma randômica
    int segundo = time(0);
    srand(segundo);
    int numerogrande = rand();

    // variaveis
    int tentativa1 = 1;
    int chute;
    int numeromisterioso = numerogrande % 100; //pode ser que gere um número enorme, então, iremos dividir o resto por 100 que sempre dará um número de 0 a 99 
    int i = 1;
    float pontos = 1000;

    while (i <= tentativas)
    {
    printf("\n\nAqui na sua tentativa %d, digite seu chute: ", tentativa1);
    scanf("%d", &chute);    
    i++;
    tentativa1++;

        if (chute < 0 )
        {
            printf("Voce nao pode chutar numeros negativos\n");
            i--;
            continue;
        }
    
    
        if (chute == numeromisterioso)
        {      
                                                            
            printf("\n\nVoce ACERTOU! Concorra mais uma vez :)\n");
            printf("Voce fez em um total de %.1f pontos, PARABENS!!\n", pontos);
            tentativa1 -= 1;
            printf("Voce acertou em %d tentativas\n\n", tentativas);
            break;
        } else {  
                if (chute < numeromisterioso)
                {
                    printf("Voce errou! Tente novamente :)\n");
                    printf("Seu numero foi menor que o Numero Misterioso\n");              
                }


                else 
                {
                    printf("Voce errou! Tente novamente :)\n");
                    printf("Seu numero foi maior que o Numero Misterioso\n");     
                 }
                sleep(2);
                system("cls");

                }    
    
            float pontosperdidos = abs(chute - numeromisterioso) / 2.0;
            pontos = pontos - pontosperdidos;


    }


    if (chute != numeromisterioso)
        {   
            --tentativa1;
            
            printf("   _      _        //\\                      _            \n");      
            printf("   \\ \\    / /       |/ \\|                    | |           \n");
            printf("    \\ \\  / _   _ _   _ _   __ _ _ _| | _ _   _ \n");
            printf("     \\ \\/ / _ \\ / _/ _ \\ | ' \\ / _ | '__/ _` |/ _ | | | |\n");
            printf("      \\  | () | (|  _/ | |) |  _| | | (| |  _| || |\n");
            printf("       \\/ \\_/ \\_\\_| | ._/ \\_||  \\_,|\\_|\\_,|\n\n");

            
            printf("Fim do jogo!\n");
            printf("Apos %d tentativas e restando %.1f pontos, Infelizmente nao foi dessa vez :(\n", tentativas, pontos);
            printf("Tente novamente!!");
        }
    

    
}