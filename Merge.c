#include <stdlib.h>
#include "Merge.h"

void mergeSort(int A[], int inicio, int fim){
    if(inicio < fim){
        int meio = (inicio + fim) / 2;
        mergeSort(A,inicio,meio);
        mergeSort(A,meio+1,fim);
        intercala(A,inicio,meio,fim);
    }
}
void intercala(int A[], int inicio, int meio, int fim){
    int *aux = (int *) malloc(sizeof(int) * (fim-inicio +1));
    int i = inicio;
    int j = meio + 1;
    int k = 0;
    while(i <= meio && j<=fim){
        if(A[i] <= A[j]){
            aux[k] = A[i];
            i++;
        }
        else{
            aux[k] = A[j];
            j++;
        }
        k++;
    }

    while(i <= meio){
        aux[k] = A[i];
        k++;
        i++;
    }
    while(j <= fim){
        aux[k] = A[j];
        k++;
        j++;
    }
    for(k =inicio; k <= fim; k++){
        A[k] = aux[k-inicio];

    }
    free(aux);

}