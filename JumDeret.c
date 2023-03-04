#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,N;
    int Jumlah;

    i = 1;
    Jumlah = 0;
    printf("Masukkan Deret bilangan : ");
    scanf("%d",&N);
    if (N > 0) {
        while (i <= N) 
        {
            Jumlah = Jumlah + i;
            i = i + 1;
        }
    } else {
        printf("Masukkan tidak boleh Negatif");
    }
    printf("%d",Jumlah);

    return 0;
}