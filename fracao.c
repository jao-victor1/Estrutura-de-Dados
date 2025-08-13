#include <stdio.h>//inclusao das funcoes/incluir bibliotecas, inclusive a "xxx.h"
#include <stdlib.h>
#include <math.h>
#include "fracao.h"


fracao criarfracao(int n, int d)//funcao dentro de funcao??
{
    fracao f; // struct fracao f
    f.Num = n;
    f.Den = d;
    return f;
}
int calcularMDS(int a, int b)
{
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    while (a % b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }
    return (b);
}
fracao SimplificarFracao(fracao f)
{
    int mdc = calcularMDS(f.Num, f.Den); //?
    f.Num = f.Num / mdc;
    f.Den = f.Den / mdc;
    return f;
}
void ExibirFracao(fracao f)
{

    printf("%d / %d\n", f.Num, f.Den);
}
fracao SomaFracao(fracao f, fracao g)
{
    fracao resposta;
    resposta.Den = f.Den * g.Den;
    resposta.Num = f.Num * g.Den + g.Num * f.Den;
    resposta = SimplificarFracao(resposta);
    return (resposta);
}
fracao SubtracaoFracao(fracao f, fracao g)
{
    fracao resposta;
    resposta.Den = f.Den * g.Den;
    resposta.Num = f.Num * g.Den - g.Num * f.Den;
    resposta = SimplificarFracao(resposta);
    return (resposta);
}