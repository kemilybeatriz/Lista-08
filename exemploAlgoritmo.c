/*03) Fa�a um programa, modularizado, que permita ao usu�rio gerar senhas. O usu�rio informa o
tamanho da senha, que poder� ter no m�ximo 15 caracteres e, na seq��ncia, gera as senhas
para o usu�rio. Para evitar que caracteres inv�lidos sejam gerados, use o intervalo 40 a 95 da
tabela ASCii. Obs: use as fun��es random() para escolher os caracteres de forma aleat�ria.

Informe o tamanho da senha: 8
Senha gerada: aB34*1g-
*/

#include <stdio.h>
#include <string.h>
//#include <time.h>
#include <stdlib.h>
#define TAM 15

void geraSenha();

void main()
{
    geraSenha();
}

void geraSenha()
{
    char senha[TAM];
    int i, tamSenha;

    printf("Informe o tamanho da senha: ");
    scanf("%d", tamSenha);

    //srand( time (NULL) );

    for(i=0; i<tamSenha; i++)
    {
        do{
            senha[i] = 1;//randon()%10;
        }while( (senha[i]<=40) || (senha[i]>=95) );
    }
    /*
    for(i=0; i<tamSenha; i++)
    {
        printf("%c", senha[i]);
    }*/

}
