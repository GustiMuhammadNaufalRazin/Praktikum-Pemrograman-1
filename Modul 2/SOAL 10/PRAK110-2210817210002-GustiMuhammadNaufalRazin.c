#include <stdio.h>
int main()
{
    int a,b,c,k,l;
    a = 12;
    c = 5;
    b = sqrt(a*a+c*c);
    k = a+c+b;
    l = 0.5 * c * a;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n",c);
    printf("Tinggi = %d cm\n\n",a);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n",a);
    printf("Sisi B = %d cm\n",b);
    printf("Sisi C = %d cm\n",c);
    printf("Keliling = %d cm\n",k);
    printf("Luas = %d cm",l);
    return 0;
}
