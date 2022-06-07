void insertion(int vetor[], int n){
    int j,chave;
    for(int i = 1; i < n;i++){
        j = i - 1;
        chave = vetor[i];
        while(chave < vetor[j] && j > -1){
            vetor[j +1] = vetor[j];
            j--;
        }
        vetor[j + 1] = chave;
    }
}