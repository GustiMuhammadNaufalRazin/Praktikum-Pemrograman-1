#include <stdio.h>
int main()
{
    char a[69],b[69],c[69],d[69],e[69],f[69],g[69];

    printf("Nama                    : ");
    gets(a);
    printf("NIM                 	: ");
    gets(b);
    printf("Kelas Paralel	        : ");
    gets(c);
    printf("Tempat/Tanggal Lahir	: ");
    gets(d);
    printf("Alamat	                : ");
    gets(e);
    printf("Hobby               	: ");
    gets(f);
    printf("No. HP                  : ");
    gets(g);

    printf("\nNama                    : %s\n",a);
    printf("NIM                 	: %s\n",b);
    printf("Kelas Paralel	        : %s\n",c);
    printf("Tempat/Tanggal Lahir	: %s\n",d);
    printf("Alamat	                : %s\n",e);
    printf("Hobby               	: %s\n",f);
    printf("No. HP                  : %s",g);
    return 0;
}
