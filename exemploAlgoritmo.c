/*03) Faça um programa, modularizado, que permita ao usuário gerar senhas. O usuário informa o
tamanho da senha, que poderá ter no máximo 15 caracteres e, na seqüência, gera as senhas
para o usuário. Para evitar que caracteres inválidos sejam gerados, use o intervalo 40 a 95 da
tabela ASCii. Obs: use as funções random() para escolher os caracteres de forma aleatória.

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
