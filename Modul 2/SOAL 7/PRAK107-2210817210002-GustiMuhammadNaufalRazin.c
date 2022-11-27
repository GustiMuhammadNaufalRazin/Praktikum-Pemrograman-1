#include <stdio.h>
int main()
{
    int a, b, c, k, hpm, biaya;
    a = 4;
    b = 5;
    c = 7;
    k = a + b + c;
    hpm = 85000;
    biaya = k * hpm;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a,b,c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n",k);
    printf("Harga tanah Per Meter adalah %d\n",hpm);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d",biaya);
    return 0;
}
