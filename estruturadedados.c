#include <stdio.h>
#include <stdlib.h>
#include <string.h> //utilizar o "strcpy"

typedef struct  {
    char Nome[150]; //151 caracteres na memoria, \0 no final da string
    char Telefone[14]; //15 caracteres na memoria
    char Endereco[200];
}pessoa; 
    int main (argc, char* argv[]){
    pessoa x; //alterar os valores das variaveis de struct

    strcpy(x.Nome, "Maria Alves");//string.h   definindo o nome para "Nome"
    strcpy(x.Telefone, "(61) 12345-6789");
    strcpy(x.Endereco, "SHIS 12 25 13");


     printf("%s\t%s\t%s", x.Nome, x.Endereco, x.Telefone);    // \t = tab

return 0;
    }