/*
02) Usando as fun��es de manipula��o de Strings, quando poss�vel, escreva um programa que
recebe um texto de no m�ximo 255 caracteres e ap�s isso apresenta as seguintes a��es:
-------------------------------------------------------------
1. Identificar as se h� a sigla UTF nesse texto. Havendo
essa sigla o programa dever� trocar a sigla por
Universidade Tecnol�gica Federal.
2. Apresentar quantas palavras terminam em �s� ou �S�.
3. Listas as palavras que terminam em �s� ou �S�.
4. Contar quantos espa�os em branco existem no texto.
5. Retirar todos os espa�os em branco do texto.
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
