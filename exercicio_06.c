/*
06) A tabela abaixo demonstra a quantidade de vendas dos fabricantes de veículos durante o período
de 1993 a 1998, em mil unidades.
Faça um programa que:
a) leia os dados da tabela;
b) determine e exiba o fabricante que mais vendeu em 1996;
c) determine e exiba o ano de maior volume geral de vendas.
d) determine e exiba a média anual de vendas de cada fabricante durante o período.
*/

#include <stdio.h>
#include <string.h>
#define NMARCAS 2 // Quantidade de marcas
#define SMARCA 15 // tamanho da string de cada marca
#define ANO_INICIAL 1993 // ano inicial da pesquisa
#define ANO_FINAL 1998 // ano final da pesquisa

void main()
{
    char marca[NMARCAS][SMARCA];
    int vendas[NMARCAS][ANO_FINAL-ANO_INICIAL+1];
    int i, j;

    leMarca(marca);
    leVendas(vendas, marca);
    melhorFab1996(vendas, marca);
}

void leMarca(char marca[NMARCAS][SMARCA])
{
    int i;
    for(i=0; i<NMARCAS; i++)
    {
        printf("Informe a %d marca: ", i+1);
        gets(marca[i]);
    }
}

void leVendas(int vendas[NMARCAS][ANO_FINAL-ANO_INICIAL+1], char marca[NMARCAS][SMARCA])
{
    int i, j, ano=1993;
    for(i=0; i<NMARCAS; i++)
    {
        printf("\n\t%s\n", marca[i]);
        for(j=0; j<(ANO_FINAL-ANO_INICIAL+1); j++)
        {
            printf("Vendas em %d: ", ano);
            ano++;
            gets(vendas[i]);
            //puts(vendas[i]);
        }
        ano=1993;
    }
    //system("cls");
}

void melhorFab1996(int vendas[NMARCAS][ANO_FINAL-ANO_INICIAL+1], char marca[NMARCAS][SMARCA])
{
    int i=0, indice=0, cont=0, melhor=0;
    while(i<NMARCAS)
    {
        cont=vendas[i][3]; // 3 é a coluna do ano de 1996
        if(cont>melhor)
        {
            melhor=cont;
            indice=i;
        }
        i++;
    }
    printf("A marca que mais vendeu em %d foi a %s.", 1996,marca[indice]);
}
