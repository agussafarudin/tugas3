#include <iostream>
#include <stdio.h>
#include <conio.h>

int minimum (int a, int b, int c);

int main(void)
{
    int a,b,c,min;
    printf(" -------Menentukan Bilangan Terkecil------- \n \n \n");
    printf("Masukkan Bilangan Pertama : ");
    scanf("%d", &a);
    printf("Masukkan Bilangan Kedua   : ");
    scanf("%d", &b);
    printf("Masukkan Bilangan Ketiga  : ");
    scanf("%d", &c);
    min=minimum(a,b,c);
    printf("Bilangan Terkecil Adalah %d",min);
    getch();
}
int minimum(int a,int b, int c)
{
    int min;
    if (a>b) {min=b;}
        else {min=a;}
    if (c<min) {min=c;}
    return(min);
}
