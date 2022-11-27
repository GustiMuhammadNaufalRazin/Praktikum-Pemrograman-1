#include <stdio.h>
int main()
{
    int a, b, c,x1 ,x2 ,x3;
    a = 4;
    b = 8;
    c = 3;
    x1 = a==b;
    x2 = b>=c;
    x3 = a!=c;
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", x1);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n",x2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d",x3);
}
