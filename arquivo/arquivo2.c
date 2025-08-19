#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    FILE *fp;
    fp = fopen ("abc/bbbb.txt", "a");//direcionando para pasta "/"
    //fprintf (fp, "%d\n", resultado);
    if (fp == NULL){
        printf("erro\n");
        return 1;
    }
    int conta;
    float saida;
    char nome[50];
    for (int i = 0; i< 4;i++){
        fcanf(fp, "%s %d %fa'1'\n", &nome, &conta, &saida);
        fprintf (fp, "%d %f %s", conta, saida, nome);
    }

    

    printf("arquivo aberto/criado\n");


    fclose(fp);

    return 0;
}//exit(1) = encerra o programa mesmo em funcoes secundarias