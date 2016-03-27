#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "util.c"
#include "bolha.c"
#include "insercao.c"
#include "selecao.c"

int main()
{
    int vetor_matriz[] = {5, 3, 8, 7, 1, 9, 6, 4, 2}, op=1, vetor[9];
    setlocale(0,"");
    while(op){
        clona_vetor(vetor_matriz, vetor, 9);
        printf("+=================================================+\n");
        printf("| ORDENACAO                                       |\n");
        printf("+=================================================+\n");
        printf("Vetor a Ordenar: ");
        imprime(vetor, 9);
        printf("\n\nMetodos de ordenacao disponiveis:\n");
        printf("  - (0) Fecha a Execução\n");
        printf("  - (1) Bolha\n");
        printf("  - (2) Bolha 2\n");
        printf("  - (3) Inserção\n");
        printf("  - (4) Seleção\n");
        printf("\n\nIndique a opcao de ordenação: ");
        scanf("%d", &op);
        if (op==1){
            bolha(vetor, 9);
        }else if (op==2){
            bolha2(vetor, 9);
        }else if (op==3){
            insercao(vetor, 9);
        }else if (op==4){
            selecao(vetor, 9);
        }else if (op>0)
            op = -1;
        if (op>0){
            printf("Vetor Ordenado: ");
            imprime(vetor, 9);
            printf("\n\n");
        }
    }
    return 0;
}
