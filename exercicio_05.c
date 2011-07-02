/*
05) Fa�a um programa que leia o nome e as 3 notas dos 10 alunos de uma turma e atrav�s de
fun��es e procedimentos:
Pedro 50 60 80
Carlos 40 70 90
Manoel 90 80 80
... ... ... ...
Zezinho 30 90 40
a) calcule:
1. a m�dia aritm�tica de cada aluno;
2. a situa��o de cada aluno; (aprovado se m�dia superior ou igual a 7.0)
3. o n�mero de alunos aprovados;
4. a m�dia geral da turma;
b) exiba:
1. o nome e a situa��o de cada aluno;
2. o n�mero de alunos aprovados;
3. a m�dia geral da turma;
4. o nome e a m�dia dos alunos com m�dia superior ou igual � m�dia geral
da turma.
Obs: Use vetores para armazenar nome, m�dia e situa��o, e uma matriz para armazenar as
notas.
*/

#include <stdio.h>
#include <string.h>
#define QUANTI 2 // quantidade de alunos
#define SNOME 30 // tamanho do nome de cada aluno
#define NNOTAS 3 // n�mero de notas de cada aluno
#define MEDIA 7 // media m�nima para aprova��o

//void leNomes(char nome[QUANTI][SNOME]);

void main()
{
    char nome[QUANTI][SNOME];
    float notas[QUANTI][NNOTAS], medias[QUANTI], mediaT=0;
    leNomes(nome);
    leNotas(notas, nome);
    calculaMedia(notas, nome, medias);
    mediaTurma(medias, mediaT);
    alunosMediaSup(nome, mediaT, medias);
}

void leNomes(char nome[QUANTI][SNOME])
{
    int i;
    for(i=0; i<QUANTI; i++)
    {
        printf("Nome %d: ", i+1);
        gets(nome[i]);
    }
    system("cls");
}

void leNotas(float notas[QUANTI][NNOTAS], char nome[QUANTI][SNOME])
{
    int i, j;
    for(i=0; i<QUANTI; i++)
    {
        printf("Nota do/da %s: \n", nome[i]);
        for(j=0; j<NNOTAS; j++)
        {
            do
            {
                printf("Nota %d: ", j+1);
                fflush(stdin);
                scanf("%f", &notas[i][j]);
                if(notas[i][j]<=0 || notas[i][j]>=10)
                {
                    printf("Nota invalida. Digite novamente.");
                    getch();
                    system("cls");
                }
            }
            while(notas[i][j]<=0 || notas[i][j]>=10);
        }
        system("cls");
    }
}

void calculaMedia(float notas[QUANTI][NNOTAS], char nome[QUANTI][SNOME], float medias[QUANTI])
{
    int i, j=0, aprovados=0;
    for(i=0; i<QUANTI; i++)
    {
        medias[i]=(notas[i][j]+notas[i][j+1]+notas[i][j+2])/3;
        if(medias[i]>=MEDIA)
        {
            printf("Aluno/a %s aprovado/a com media: %f\n",nome[i], medias[i]);
            aprovados++;
        }
        else
        {
            printf("Aluno/a %s reprovado/a com media: %f\n",nome[i], medias[i]);
        }
    }
    printf("\n\tNumero de aprovacao.\n");
    printf("\n%d alunos foram aprovados.", aprovados);
}

void mediaTurma(float medias[QUANTI], float mediaT)
{
    int i;
    for(i=0; i<QUANTI; i++)
    {
        mediaT = mediaT + medias[i];
    }
    ;
    printf("\nMedia Turma: %f", (mediaT/QUANTI) );
}

void alunosMediaSup(char nome[QUANTI][SNOME], float mediaT, float medias[QUANTI])
{
    int i;
    for(i=0; i<QUANTI; i++)
    {
        if(medias[i]>=mediaT)
        {
            printf("Aluno(a) %s possui media %f.", nome[i], medias[i]);
        }
    }
}
