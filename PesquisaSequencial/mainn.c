#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

int main()
{
    Time *Tabela = LerDados("tabela.csv");
    InsertionSort(Tabela, 20);
    for (int i = 0; i < 20; i++) printf ("%s\n", Tabela[i].Equipe);

    return 0;}