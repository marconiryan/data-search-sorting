#include <iostream>

class Counting{
    private:
        static int getMaior(const int vetor[], int n){
            int maior = vetor[0];
            for(int i = 0; i < n; i++){
                if(vetor[i] > maior){
                    maior = vetor[i];
                }
            }
            return maior;
        }
        static void CountingSort(int vetor[], int n){
            int maior = getMaior(vetor,n);
            int *new_vector = (int *)calloc(maior + 1,sizeof(int));
            for(int i = 0; i < n ; i++){
                new_vector[vetor[i]] += 1;
            }
            for(int i = 0; i < maior + 1; i++){
                while(new_vector[i]--){
                    std::cout << i << "\n";
                }
            }
        }
    public:
        Counting(int *vetor, int n){
            CountingSort(vetor,n);
        }
};


int main() {
    int n = 7;
    int vetor[] = {5,4,3,2,1, 1 , 1};
    new Counting(vetor,n);

    return 0;
}
