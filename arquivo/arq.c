#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int resultado;
    FILE *fp;
    fp = fopen ("abc/aaaa.txt", "w");//direcionando para pasta "/"
    //fprintf (fp, "%d\n", resultado);
    if (fp == NULL){
        printf("erro\n");
        return 1;
    }
    for (int i = 1; i<11; i++){
        resultado = 7 * i;
        fprintf (fp, "7 x %d = %d\n", i, resultado);
    }

    printf("arquivo aberto/criado\n");


    fclose(fp);

    return 0;
}//exit(1) = encerra o programa mesmo em funcoes secundarias