#include <stdio.h>
#include <stdlib.h>


void soru1(){
    printf("\\n yeni satira gecer \n");
}

void soru2(){
    int a;
    int b;
    int sonuc=0;
    printf("1. sayi :");
    scanf("%d",&a);
    printf("2. sayi :");
    scanf("%d",&b);
    sonuc = a+b;
    printf("Sonuc = %d \n\n",sonuc);

}

void soru3(){
    int a;
    int b;
    int c;
    float sonuc=0;
    printf("1. sayi :");
    scanf("%d",&a);
    printf("2. sayi :");
    scanf("%d",&b);
    printf("3. sayi :");
    scanf("%d",&c);
    sonuc = (float)((--a) + (b+2) + (c*3))/3;
    printf("a= %4.2f \n",sonuc);

}


int main()
{
    soru1();
    soru2();
    soru3();
    return 0;
}
