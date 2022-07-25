#include "counting.h"
void countingSort(int *a, int max, int n){
    int *c = (int*) malloc(n * sizeof(int));
    int *b = (int*)  malloc((max +1)* sizeof(int));

    for (int i = 0; i < max + 1; i++) b[i] = 0;
    for (int i = 0; i < n; i++) b[a[i]]++;
    for (int i = 1; i < max +1; i++) b[i] += b[i-1];

    for (int i = n-1; i >= 0; i--) {
        b[a[i]] = b[a[i]] -1;
        c[b[a[i]]] = a[i];
    }
    for (int i = 0; i < n; i++) a[i] = c[i];
}