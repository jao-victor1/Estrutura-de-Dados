#ifndef EQUIPE_H
#define EQUIPE_H
#define ERRO -999
typedef struct
{
    int Pos;
    char Estado[30];
    char Equipe[50];
    int Pts;
    int J;
    int V;
    int E;
    int D;
    int GP;
    int GC;
    int SG;
    float Aproveitamento;
} Time;

Time *LerDados(char *Arquivo);
int getPontos(Time *T, int Posicao);
float getAproveitamento(Time *T, char *Nome);

#endif