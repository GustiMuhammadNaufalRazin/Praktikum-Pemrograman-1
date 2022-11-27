#include <stdio.h>
int main()
{
    for(int i = 0; i<= 1; i++){
    float a1,b1,x1,y1,i1,j1,hh1;
    scanf("%f %f %f %f %f %f",&a1,&b1,&i1,&j1,&x1,&y1);
    hh1 = (a1-b1)*(i1/j1)-(x1+y1);
    printf("%.3f\n\n",hh1);
}
}
