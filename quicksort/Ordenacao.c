#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 500000

void TrocarElemento(int *A, int *B);
int Particao(int *V, int Inf, int Sup);
void QuickSort(int *V, int Inf, int Sup);
void ExibirVetor(int *V, int N);

int main()
{
    int vetor[TAMANHO];
    srand(time(NULL));
    for (int i = 0; i < TAMANHO; i++)
        vetor[i] = rand() % 1000;
    // int Tamanho = sizeof (vetor) / sizeof (int);
    clock_t T0 = clock();

    QuickSort(vetor, 0, TAMANHO - 1);
    ExibirVetor(vetor, TAMANHO);

    clock_t TF = clock();

    double tempoDeCPU = ((double)TF - T0) / CLOCKS_PER_SEC;
    printf("\n%.3f", tempoDeCPU);

    return 0;
}

void TrocarElemento(int *A, int *B)
{ // realizando a troca dos valores(apontados) das variaveis
    // A e B sao ponteiros (guardam endereco de memoria)
    int temp = *A; // temp recebe o valor apontado por a
    *A = *B;       // o valor apontado por a recebe o valor apontado por b
    *B = temp;     // o valor apontado por b recebe temp(o valor apontado por a)
}
int Particao(int *V, int Inf, int Sup)
{
    int Pivot = V[((Inf + Sup) / 2)];
    int i = Inf;
    int j = Sup;

    while (i <= j)
    {
        while (V[i] < Pivot)
            i++;
        while (V[j] > Pivot)
            j--;
        if (i <= j)
        {
            TrocarElemento(&V[i], &V[j]);
            i++;
            j--;
        }
    }

    return i;

} // qsort = funcao de stdlib
void QuickSort(int *V, int Inf, int Sup)
{
    if (Inf < Sup)
    {
        int P = Particao(V, Inf, Sup);
        QuickSort(V, Inf, P - 1);
        QuickSort(V, P, Sup);
    }
}
void ExibirVetor(int *V, int N)
{
    for (int i = 0; i < N; i++)
        printf("%d\t", V[i]);

    printf("\n");
}