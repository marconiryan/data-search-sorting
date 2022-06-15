#include <stdio.h>
#include <stdlib.h>


void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}
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

void printvector(int vector[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ",vector[i]);
    }
    printf("\n");

}

void insertvector(int vector[], int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &vector[i]);
    }

}

int main(){

    int n; 
    scanf("%d",&n);
    int *vetor = (int *) malloc(sizeof(int) * n);
    insertvector(vetor, n);
    heapSort(vetor,n);
    printvector(vetor,n);

    return 0;

}