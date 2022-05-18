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
  int *vetor = (int *)malloc(sizeof(int) * n);
  for(int i = 0; i < n; i++){scanf("%d",&vetor[i]);}
  for(int i = 0; i < n; i++){
    int menor = i;
    for(int j = i; j < n; j++){if(vetor[menor] > vetor[j]){menor = j;}}
    
    swap(&vetor[i],&vetor[menor]);
    printf("%d %d\n",vetor[i],vetor[menor]); 

  }
  for(int i = 0; i < n; i++){printf("%d ",vetor[i]);}
  printf("\n");

  return 0;
}
