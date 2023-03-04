#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,N;
    int total;
    int hasilbagi;

    printf("Masukkan Nilai N : ");
    scanf("%d", &N);

    i = 1;
    total = 0;
    if (N > 0){
        while (i < N)
        {
            hasilbagi = N % i;
            if (hasilbagi != 0){
                i = i + 1;
            }
            else {
                total = total + i;
                i = i + 1;
            }
        }

        if (total == N){
        printf ("%d Merupakan Bilangan Sempurna", N);
        } else {
        printf ("%d Bukan Merupakan Bilangan Sempurna", N);
        }
        
    } else {
        printf ("Masukkan tidak boleh negatif");
    }

    return 0;
}