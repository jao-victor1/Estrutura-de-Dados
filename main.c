#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "fracao.h"



/*

    fracao f;
    int resto;
    int mdc;
    int dividendo_temp;
    do {
    if (f.Num % f.Den != 0){       ERRO

    }

    }while (resto == 0);
}*/

int main()

{
    /*fracao f1 = criarfracao(30, 40);
    f1 = SimplificarFracao(f1);
    ExibirFracao(f1);
    printf ("%d %d", f1.Num, f1.Den);
    printf("%f\n", (float)f1.Num / f1.Den);


   printf ("%d", calcularMDS(-30, 40))*/

    /*fracao f5 = criarfracao(2, 4);
    fracao f6 = criarfracao(4, 9);
    fracao f7 = SomaFracao(f5, f6);
    ExibirFracao(f7);
    fracao f8 = criarfracao(5, 6);
    fracao f9 = criarfracao(4, 9);
    fracao f10 = SubtracaoFracao(f8, f9);
    ExibirFracao(f10);*/

    fracao f1 = criarfracao(3, 4);
    fracao f2 = criarfracao(7, 9);
    fracao f3 = criarfracao(5, 12);
    fracao f4 = SubtracaoFracao(f1, f2);
    fracao f5 = SomaFracao(f4, f3);
    fracao f6 = SimplificarFracao(f5);
    ExibirFracao(f6);
    return 0;
}

// fracao divindo numerador pelo denominador analisando o resto, caso seja diferente de 0, sera dividido o denominador pelo resto ate dar 0 no resto,