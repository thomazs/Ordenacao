#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "util.c"
#include "bolha.c"
#include "insercao.c"
#include "selecao.c"

int main()
{
    int *vetor_matriz, op=1, *vetor, tamanho, i;
    setlocale(0,"");


    printf("+=================================================+\n");
    printf("| INICIANDO                                       |\n");
    printf("+=================================================+\n");
    printf("Informe o tamanho do vetor:");
    scanf("%d", &tamanho);

    //Cria o vetor dinamicamente
    vetor_matriz = malloc(sizeof(int)*tamanho);
    vetor = malloc(sizeof(int)*tamanho);

    //Dá entrada para os itens do vetor
    for(i=0;i<tamanho;i++){
        printf("Informe o %dº elemento do vetor: ", i+1);
        scanf("%d", vetor_matriz+i);
    }

    while(op){
        clona_vetor(vetor_matriz, vetor, tamanho);
        printf("+=================================================+\n");
        printf("| ORDENACAO                                       |\n");
        printf("+=================================================+\n");
        printf("Vetor a Ordenar: ");
        imprime(vetor, tamanho);
        printf("\n\nMetodos de ordenacao disponiveis:\n");
        printf("  - (0) Fecha a Execução\n");
        printf("  - (1) Bolha\n");
        printf("  - (2) Bolha 2\n");
        printf("  - (3) Inserção\n");
        printf("  - (4) Seleção\n");
        printf("\n\nIndique a opcao de ordenação: ");
        scanf("%d", &op);
        if (op==1){
            bolha(vetor, tamanho);
        }else if (op==2){
            bolha2(vetor, tamanho);
        }else if (op==3){
            insercao(vetor, tamanho);
        }else if (op==4){
            selecao(vetor, tamanho);
        }else if (op>0)
            op = -1;
        if (op>0){
            printf("Vetor Ordenado: ");
            imprime(vetor, tamanho);
            printf("\n\nPressione algo para continuar...\n\n");
            getch();
        }
    }
    free(vetor_matriz);
    free(vetor);
    return 0;
}
