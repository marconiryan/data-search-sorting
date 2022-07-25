#include "getMax.h"
int getMax(int *vec,int n){
    int max = 0;
    for (int i = 0; i < n; i++)
        if (vec[i] > max) max = vec[i];
    return max;
}