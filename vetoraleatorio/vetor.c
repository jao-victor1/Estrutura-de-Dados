#include <stdio.h>
#include <stdlib.h>

#include <time.h>

#define TAMANHO 200000

int main()
{

    int soma;
    int V[TAMANHO];

    clock_t T0 = clock();
    srand(time(NULL));
    for (int i = 0; i < TAMANHO; i++)
        V[i] = rand();

    for (int i = 0; i < TAMANHO; i++){
        int temp = rand()%1000;
        printf ("%d\n", temp);
        soma = soma += temp;}

    printf("%d", soma);
    clock_t TF = clock();

    double tempoDeCPU = ((double)TF - T0) / CLOCKS_PER_SEC;
    printf("\n%.3f", tempoDeCPU);
}