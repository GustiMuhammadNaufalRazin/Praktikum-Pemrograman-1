#include <stdio.h>
int main()
{
    for(int i = 0; i <= 1; i++){
    float x1,x2,t1;
    printf("Masukkan Nilai Pertama = ");
    scanf("%f", &x1);
    printf("Masukkan Nilai Kedua = ");
    scanf("%f", &x2);
    t1 = x1 + x2;
    printf("Hasil dari penjumlahan nilai pertama \"%.4g\" dan nilai kedua \"%.4g\" adalah \"%.4g\"\n\n",x1,x2,t1);

}
}
