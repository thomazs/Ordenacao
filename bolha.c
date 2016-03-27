
void bolha(int vetor[], int tamanho){
    int i, j;
    for(i=0; i<tamanho; i++)
        for(j=0;j<tamanho-1;j++)
            if (vetor[j]>vetor[j+1])
                troca(&vetor[j], &vetor[j+1]);
}

void bolha2(int vetor[], int tamanho){
    int i, trocou=1;
    while(trocou){
        trocou = 0;
        for(i=0;i<tamanho-1;i++){
            if (vetor[i]>vetor[i+1]){
                troca(&vetor[i], &vetor[i+1]);
                trocou = 1;
            }
        }
    }
}
