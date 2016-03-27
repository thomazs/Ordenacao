
void selecao(int vetor[], int tamanho){
    int i, j, m;
    for(i=0;i<tamanho-1;i++){
        m = i;
        for(j=i+1; j<tamanho; j++)
            if (vetor[j]<vetor[m])
                m = j;
        if (i!=m)
            troca(&vetor[m], &vetor[i]);
    }
}
