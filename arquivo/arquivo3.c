#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *fp;
    FILE *fp2;
    fp = fopen("abc/carrinho.txt", "r"); // direcionando para pasta "/"
    fp2 = fopen("abc/kkk.txt", "w");
    // fprintf (fp, "%d\n", resultado);
    if (fp == NULL)
    {
        printf("erro\n");
        return 1;
    }
    int conta;
    float saida;
    char nome[50];

    while (fscanf(fp, "%s %d %f\n", &nome, &conta, &saida) != EOF)
    {
        fprintf(fp2, "\n\n%s: %d x %f = %f", nome, conta, saida, conta * saida);
    }

    printf("arquivo aberto/criado\n");

    fclose(fp);

    return 0;
} // exit(1) = encerra o programa mesmo em funcoes secundarias