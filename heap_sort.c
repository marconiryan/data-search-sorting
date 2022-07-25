#include "swap.h"

void criarHeap(int A[], int i, int n){
    int maior = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && A[left] > A[i]){
        maior = left;
    }

    if(right < n && A[right] > A[maior]){
        maior = right;
    }

    if(maior != i){
        swap(&A[i], &A[maior]);
        criarHeap(A,maior,n);
    }

}


void heapSort(int A[], int n){
    for(int k = n / 2 -1; k >= 0; k--){
        criarHeap(A,k,n);
    }

    for(int k = n -1; k >= 1; k--){
        swap(&A[0],&A[k]);
        criarHeap(A,0,k);
    }

}

