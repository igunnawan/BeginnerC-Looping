#include <stdio.h>
#include <stdlib.h>

int main () {
    int i,N;
    int bagi;
    int total;

    printf("Masukkan bilangan N : ");
    scanf("%d",&N);
    i = 2;
    total = 0;
    if (N > 0){
        while (i <= N)
        {
            bagi = N % i;
            if (bagi != 0) {
                i = i + 1;
            } 
            else {
                total = total + 1;
                i = i + 1;
            }
        }
        
        if (total == 1) {
            printf("%d Merupakan sebuah Bilangan Prima", N);
        } else {
            printf("%d Bukan Merupakan sebuah Bilangan Prima", N);
        }
    } 
    else {
        printf("Masukkan tidak boleh Negatif");
    }
}