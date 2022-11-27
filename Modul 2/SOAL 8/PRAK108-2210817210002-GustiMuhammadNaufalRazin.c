#include <stdio.h>
int main()
{
    float phi,tp,jp,p,r;
    phi = 3.14;
    tp = 5;
    jp = 14;
    p = jp/tp;
    r = p/(2*phi);


    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n",tp);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n",jp);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer",r);
    return 0;
}
