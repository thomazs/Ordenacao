
void insercao(int vetor[], int tamanho){
    int i, j, chave;
    for(i=1;i<tamanho;i++){
        chave = vetor[i];
        j = i-1;
        while(j>=0 && chave < vetor[j]){
            troca(&vetor[j], &vetor[j+1]);
            j--;
        }
    }
}
