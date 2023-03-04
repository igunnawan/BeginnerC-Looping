#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,N;
    int hasilbagi;

    printf("Masukkan bilangan N : ");
    scanf("%d",&N);

    i = 1;
    if (N > 0){
        while (i <= N)
        {
            hasilbagi = N % i;
            if (hasilbagi != 0) {
                i = i + 1;
            }
            else {
                printf("%d, ",i);
                i = i + 1;
            }
        }
    } else {
        printf("Masukkan tidak boleh negatif");
    }
    return 0;
}