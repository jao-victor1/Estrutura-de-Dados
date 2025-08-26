#include <stdio.h>
#include <stdlib.h>
#define ERRO -1

int PesquisaSequencial(int *V, int N, int Chave);

int main()
{
    int Numeros[] = {14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
                     40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
                     30, 41, 15, 27, 33, 18, 26, 39, 12, 21};
    int Tamanho = sizeof(Numeros) / sizeof(int); // definindo quantos itens tem no vetor, / bytes
    int Elemento = 35;
    int Posicao = PesquisaSequencial(Numeros, Tamanho, Elemento);
    return 0;
}



int PesquisaSequencial(int *V, int N, int Chave)
{
    for (int i = 0; i < N; i++)
    {
        if (V[i] == Chave)
        {
            printf("O elemento chave foi encontrado na posicao %d.\n", i + 1);
            return 1;
        }
    }
    printf ("O elemento nao foi encontrado.\n");
    return ERRO;
}