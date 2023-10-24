#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Sayý Yer Degistirme
    //A ve B degiskenlerine iki tamsayýyý girdi olarak alan ve yerini
    //degistiren bir C programi yaziniz."
    int a,b,c;
    printf("A sayisini giriniz.");
    scanf("%d",&a);
    printf("B sayisini giriniz.");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("A sayisi degeri :   %d\n",a);
    printf("B sayisini giriniz: %d\n",b);
}
