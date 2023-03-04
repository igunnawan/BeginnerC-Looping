#include <stdio.h>
#include <stdlib.h>

int main() {

    int i,j,N;
    int total;
    printf("Masukkan N :");
    scanf("%d",&N);
    if (N > 0){
        for (i = 1; i < N; i++){
            total = 0;
            for (j = 1; j < i; j++){
                if (i%j == 0){
                    total = total + j;
                }
            }
            if (total == i){
                printf("%d, ", i);
            }
        }
    }
    else {
        printf("Masukkan tidak boleh negatif");
    }
    return 0;
}