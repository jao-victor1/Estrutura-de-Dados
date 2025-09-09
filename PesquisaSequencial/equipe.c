#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

Time *LerDados(char *Arquivo)
{
    Time *X = malloc(20 * sizeof(Time));
    if (X == NULL)
    {
        printf("memoria insuficiente.\n");
        exit(1);
    }

    FILE *fp = fopen(Arquivo, "r");

    if (fp == NULL)
    {
        printf("ERRO");
        exit(1);
    }
    int i = 0;
    char cabecalho[100];
    fscanf(fp, "%s", cabecalho);
    while (
        fscanf(
            fp,
            "%d; %[^;]; %[^;]; %d; %d; %d; %d; %d; %d; %d; %d\n",
            &X[i].Pos, X[i].Estado, X[i].Equipe, &X[i].Pts, &X[i].J,
            &X[i].V, &X[i].E, &X[i].D, &X[i].GP, &X[i].GC, &X[i].SG) == 11)
    {
        printf("%s\n", X[i].Equipe);
        X[i].Aproveitamento = (float)100 * X[i].Pts / (3 * X[i].J);
        i++;
    }

    fclose(fp);
    return X;
}
int getPontos(Time *T, int Posicao)
{
    for (int i = 0; i < 20; i++)
    {
        if (T[i].Pos == Posicao)
            return T[i].Pts;
    }
    return ERRO;
}
float getAproveitamento(Time *T, char *Nome)
{
    for (int i = 0; i < 20; i++)
    {
        if (strcmp(T[i].Equipe, Nome) == 0)
        {
            return T[i].Aproveitamento;
        }
    }
    return ERRO;
}
void InsertionSort(Time *V, int N){
Time Chave;//quem sera incerido na parte ordenada
int i; //posicao do elemento
int j; // posicao do elemento da parte ordenada que sera comparada com chave

for (i = 1; i < N; i++){
    Chave = V[i];
    j = i-1;

    while ( j >= 0 && strcmp (V[j].Equipe, Chave.Equipe) > 0){
        V[j+1] = V[j];
        j--; //se j = -1, sera adicionado um na linha abaixo
    } V[j+1] = Chave;

}

}