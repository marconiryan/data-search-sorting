#include "swap.h"
void bubble(int vetor[], int n){
    for(int i = n; i > 0; i--){
        int flag = 0;
        for(int j = 0; j < i - 1; j++){
            if(vetor[j] > vetor[j+1]){
                swap(&vetor[j],&vetor[j+1]);
                flag = 1;
            }
        }
        if(!flag){
            break;
        }
    }
}

//ToDo