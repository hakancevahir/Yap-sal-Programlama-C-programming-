#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int kuvvetbul(int x, int y){
    int sonuc;
    if (y==0) sonuc=1;
    else sonuc = x * kuvvetbul(x,y-1);
    return sonuc;
}

int toplambul(int x,int y){
    int sonuc;
    printf("S1 = %d ",x);
    printf("S2 = %d ",y);
    sonuc = x + y;
    return sonuc;
}

void menu(){

    int secim;
    do{
        printf("1- Kuvvet Bul \n");
        printf("2- Toplam Bul \n");
        printf("3- Cikis \n");
        printf("Secim gir:");
        scanf("%d",&secim);

        if(secim==1){
            int x,y,sonuc;
            printf("x ="); scanf("%d",&x);
            printf("y ="); scanf("%d",&y);
            sonuc = kuvvetbul(x,y);
            printf("Sonuc = %d\n",sonuc);
        }
        else if(secim==2) {
            srand(time(NULL));
            int x,y,sonuc;
            x=(rand()%100)+1;
            y=(rand()%100)+100;
            sonuc=toplambul(x,y);
            printf("Sonuc = %d\n",sonuc);
        }
        else if(secim==3) {break;}
        else {
            printf("Hatali secim yaptiniz. Tekrar seciniz.\n\n");
        }
    }while(secim!=3);
}

int main()
{
    menu();
    return 0;
}
