#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(){
  int n;
 
  scanf("%d",&n);
  int *vetor = (int *) malloc(sizeof(int) * n);
  for(int i = 0; i < n; i++){scanf("%d",&vetor[i]);}
  for(int i = n-1; i > 0; i--){
    for(int j = 0; j < i; j++){
        if(vetor[j] > vetor[j+1]){
          swap(&vetor[j],&vetor[j+1]);
        }
    }
  }
  for(int i = 0; i < n; i++){
    printf("%d\n",vetor[i]);
  }

  return 0;
}

