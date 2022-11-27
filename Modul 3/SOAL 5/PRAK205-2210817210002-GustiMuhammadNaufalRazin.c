#include <stdio.h>
int main()
{
    int i = 0;
    while(i<=1){
    int a,b,c,k,l;
    scanf("%d %d",&a,&b);
    c = sqrt(b*b-a*a);
    k = a+b+c;
    l = 0.5*c*a;
    printf("Alas = %d cm\n",c);
    printf("Tinggi = %d cm\n",a);
    printf("Keliling = %d cm\n",k);
    printf("Luas = %d cm^2\n\n",l);
    i++;
}
}
