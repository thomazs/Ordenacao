
void troca(int *a, int *b){
    // Utilizado para trocar valor de variáveis
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void imprime(int vetor[], int tamanho){
    int i;
    printf("%d", vetor[0]);
    for (i=1; i<tamanho; i++)
        printf(",%d", vetor[i]);
}

void clona_vetor(int vetor1[], int vetor2[], int tamanho){
    int i;
    for (i=0; i<tamanho; i++)
        vetor2[i] = vetor1[i];
}
