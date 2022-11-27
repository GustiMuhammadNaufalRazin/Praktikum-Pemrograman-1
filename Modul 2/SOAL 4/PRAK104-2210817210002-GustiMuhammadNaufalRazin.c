#include <stdio.h>
int main()
{
    float sA, sB, dA, dB, hA, hB;
    char d = '%';
    sA = 400000;
    sB = 350000;
    dA = 13;
    dB = 21;
    hA = sA - dA/100 * sA;
    hB = sB - dB/100 * sB;

    printf("Harga Sepatu A adalah %.f\n", sA);
    printf("Harga Sepatu A adalah %.f\n", sB);
    printf("Sepatu A mendapat diskon 13%c sehingga harganya menjadi %.0f\n",d, hA);
    printf("Sepatu B mendapat diskon 21%c sehingga harganya menjadi %.0f",d, hB);

}
