#ifndef EQUIPE_H
#define EQUIPE_H

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

Time *LerDados(char * Arquivo);


#endif