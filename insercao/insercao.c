#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 500000


void Exibirvetor (int *V, int N);
void InsertionSort(int *V, int N);






int main () {
    int Conjunto[TAMANHO];
    srand(time(NULL));
    for(int i = 0; i < TAMANHO; i++) Conjunto[i] = rand() % 1000;

    clock_t T0 = clock();
  
  
    InsertionSort (Conjunto, TAMANHO);
   clock_t TF = clock();

    double tempoDeCPU = ((double)TF - T0) / CLOCKS_PER_SEC;
 printf("\n%.3f", tempoDeCPU);
   


    return 0;
    }



void InsertionSort(int *V, int N){
int Chave;//quem sera incerido na parte ordenada
int i; //posicao do elemento
int j; // posicao do elemento da parte ordenada que sera comparada com chave

for (i = 1; i < N; i++){
    Chave = V[i];
    j = i-1;

    while ( j >= 0 && V[j] > Chave){
        V[j+1] = V[j];
        j--; //se j = -1, sera adicionado um na linha abaixo
    } V[j+1] = Chave;

}

}



void Exibirvetor (int *V, int N){
    for (int i = 0; i < N; i++){
        printf ("%d\t", V[i]);
        
    }printf ("\n");

}