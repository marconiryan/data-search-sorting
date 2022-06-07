#include "swap.h"
int min(int vetor[], int inicio,int fim){
    int posMin = inicio;
    for(int i = inicio; i < fim; i++){
        if(vetor[i] < vetor[posMin]){
            posMin = i;
        }
    }
    return posMin;
}

void selection(int vetor[], int size){
    for(int i = 0; i < size; i++){
        swap(&vetor[i], &vetor[min(vetor,i,size)]);
    }
}