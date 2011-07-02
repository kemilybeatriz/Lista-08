/*
01) A loteria esportiva consiste em uma modalidade de jogo de apostas, com periodicidade semanal,
onde os prognósticos são feitos sobre os resultados de uma serie de 13 jogos de futebol,
realizados em datas prefixadas.
Escreva um programa que:
a) Recebe o gabarito de apostas, o qual contém o nome dos times que jogaram entre si e o
resultado desses jogos.
b) Le uma quantidade definida pelo usuário de apostas contendo o número do bilhete e as
marcações desse bilhete e, após isso, verifica quais fizeram 13 pontos, ou seja, acertaram
todos os jogos.
c) Caso não haja acerto de 100% aponte o jogo que mais fez pontos.
*/

#include <stdio.h>
#include <string.h>
#define JOGOS 4 // quantidade de jogos
#define TAM 15// tamanho do nome de cada time
#define NBILHETE 99 // valor inicial para a contagem do valor do bilhete
#define NAPOSTAS 20


void main()
{
    char time1[JOGOS][TAM], time2[JOGOS][TAM];
    int resultado[JOGOS], aposta[NAPOSTAS][JOGOS], bilhete[JOGOS];
    int quantidade;
    leTimes(time1, time2);
    leResultados(resultado);
    do
    {
        printf("Informe a quantidade de apostas: ");
        scanf("%d", &quantidade);
        if(quantidade<=0)
        {
            printf("Valor de apostas invalido.\n");
        }
    }
    while(quantidade<=0);
    leApostas(bilhete, aposta, quantidade);
    //verificaVencedor(resultado,bilhete,aposta);
}

void leTimes(char time1[JOGOS][TAM], char time2[JOGOS][TAM])
{
    int i, j;
    for(i=0; i<JOGOS; i++)
    {
        printf("\tJOGO - %d\n\n", i+1);
        printf("Informe os times(Time 1 'Enter' Time 2): ");
        gets(time1[i]);
        gets(time2[i]);
        puts(time1[i]);
        puts(time2[i]);
    }
}

void leResultados(int resultado[JOGOS])
{
    int i;
    for(i=0; i<JOGOS; i++)
    {
        //system("cls");
        do
        {
            printf("\t\nRESULTADO JOGO - %d\n", i+1);
            printf("1 - Time 1 vencedor.\n");
            printf("2 - Time 2 vencedor.\n");
            printf("0 - Empate.\n");
            printf("R: ");
            scanf("%d", &resultado[i]);
            if((resultado[i]!=0) && (resultado[i]!=1) && (resultado[i]!=2))
            {
                printf("Valor invalido. Tente novamente.");
                getch();
                //system("cls");
            }
        }
        while((resultado[i]!=0) && (resultado[i]!=1) && (resultado[i]!=2));
    }
}

void leApostas(int bilhete[JOGOS], int aposta[NAPOSTAS][JOGOS], int quantidade)
{
    int i, j;
    for(j=0; j<quantidade; j++) // uma nova aposta começa
    {
        printf("\tBILHETE %d\n", (NBILHETE+j+1));
        for(i=0; i<JOGOS; i++)
        {
            do
            {
                printf("\t\nAPOSTA JOGO - %d\n", i+1);
                printf("1 - Time 1 vencedor.\n");
                printf("2 - Time 2 vencedor.\n");
                printf("0 - Empate.\n");
                printf("R: ");
                scanf("%d", &aposta[j][i]);
                if((aposta[j][i]!=0) && (aposta[j][i]!=1) && (aposta[j][i]!=2))
                {
                    printf("Valor invalido. Tente novamente.");
                    getch();
                }
            }
            while((aposta[j][i]!=0) && (aposta[j][i]!=1) && (aposta[j][i]!=2));
        }
    }
}

/*
void verificaVencedor(int resultado[JOGOS], int bilhete[JOGOS], int aposta[NAPOSTAS][JOGOS], int quantidade)
{
    int i;
    for(i=0; i<quantidade; i++)
    {
        if(resultado[i]==aposta[j][i])
        {

        }
    }
}




*/



















/*void verificaWinner(int resultado[JOGOS], int bilhete[JOGOS], int aposta[JOGOS], int *quantidade)
{
    int bilh, i;

    for(bilh=0; bilh<quantidade; bil)
}

do
{
    printf("\n\nResultado\n");
    printf("1 - Time 1 vencedor.\n");
    printf("2 - Time 2 vencedor.\n");
    printf("0 - Empate.\n");
    scanf("%d", &resultado[i]);
    if((resultado[i]!=0) && (resultado[i]!=1) && (resultado[i]!=2))
    {
        printf("Valor invalido. Tente novamente.");
        getch();
        system("cls");
    }
}
while((resultado[i]!=0) && (resultado[i]!=1) && (resultado[i]!=2));
    }
    //system("cls");
}

void leApostas(char bilhete[])
{
    int quanti;
    printf("\tAPOSTAS\n\n");
    printf("Quantos bilhetes?\n");
    scanf("%d", &quanti);
}
*/
