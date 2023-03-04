#include <stdio.h>
#include <stdlib.h> 

int main (){
    int i,j,N;
    int bagi;
    int total;

    printf ("Masukkan N : ");
    scanf ("%d", &N);

    if (N > 0){
        for (i = 2;i <= N; i++){
            total = 1;
            for (j = 2; j < i; j++){
                if(i%j == 0){
                    total = 0;
                }
            }

            if (total == 1){
                printf("%d ", i);
            }
        }
    }
    else {
        printf("Masukkan tidak boleh negatif");
    }
    // i = 2;
    // j = 2;

    // if (N > 0){
    //     while (i <= N)
    //     {
    //         total = 0;
    //         while (j < i)
    //         {
    //             if (i%j != 0){
    //                 j++;
    //             }
    //             else {
    //                 total = total + 1;
    //                 j++;
    //             } 
    //         }

    //         if (total == 1){
    //             i++;
    //             printf("%d, ", i);
    //         }
    //         else {
    //             i++;
    //         }
            
    //     }
    // // }
    // else {
    //     printf("Masukkan tidak boleh negatif");
    // }
}