/*
02) Usando as funções de manipulação de Strings, quando possível, escreva um programa que
recebe um texto de no máximo 255 caracteres e após isso apresenta as seguintes ações:
-------------------------------------------------------------
1. Identificar as se há a sigla UTF nesse texto. Havendo
essa sigla o programa deverá trocar a sigla por
Universidade Tecnológica Federal.
2. Apresentar quantas palavras terminam em “s” ou “S”.
3. Listas as palavras que terminam em “s” ou “S”.
4. Contar quantos espaços em branco existem no texto.
5. Retirar todos os espaços em branco do texto.
6. Sair
-------------------------------------------------------------
*/
#include <stdio.h>
#include <string.h>
#define TEXTO 255

void main()
{
    char string[TEXTO];
    gets(string);
}

char verificaUtf(char s[TEXTO])
{
    char aux[TEXTO]
    int i, j;
    tam=strlen(s);
    for(i=0, j=0; i<tam; i++)
    {
        if(s[i]=='U')
        {
            aux[j]='U';
            j++;
        }
    }
}
