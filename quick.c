#include "swap.h"

int particiona(int vetor[], int inicio, int fim){
    int posPivo = fim;
    int k = inicio;
    for(int i = inicio; i < fim;i++){
        if (vetor[i] <= vetor[posPivo]){
            swap(&vetor[i], &vetor[k]);
            k++;
        }
    }
    if(vetor[k] > vetor[posPivo]){
        swap(&vetor[k], &vetor[posPivo]);
        posPivo = k;
    }
    return posPivo;
}

void quick(int A[], int inicio, int fim){
    if(inicio > fim){ return;}
        int posPivo = particiona(A, inicio, fim);
        quick(A,inicio,posPivo - 1);
        quick(A, posPivo + 1, fim);
}