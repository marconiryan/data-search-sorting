#include <stdlib.h>
#include "getMax.h"
#include "radix.h"


void counting(int *vec, int n,int position){
    int *aux = (int*) malloc(n * sizeof(int));
    int count[10] = {0,0,0,0,0,0,0,0,0,0};

    for (int i = 0; i < n; i++) count[(vec[i]/position)%10]++;
    for (int i = 1; i < 10; i++) count[i] = count[i] + count[i-1];

    for (int i = n-1; i >= 0; i--) {
        int dig = (vec[i]/position)%10;
        count[dig]--;
        aux[count[dig]] = vec[i];
    }

    for (int i = 0; i < n; i++) vec[i] = aux[i];
}

void radix(int *vec,int n){
    int max = getMax(vec, n);
    for (int pos = 1; max/pos > 0; pos *= 10) counting(vec, n, pos);
}