#include <stdio.h>
#include <stdlib.h>

void AsalSayiBulma(){
    int i,j,kontrol;
    int sayac=0;
    int baslangic;
    int bitis;
    printf("\nBaslangic degeri :");
    scanf("%d",&baslangic);
    printf("Bitis degeri :");
    scanf("%d",&bitis);

    if(bitis < 2)
        printf("Asal Sayi Bulunamadi!!!");
    else{

        for(i=baslangic; i<=bitis; i++){
            kontrol = 0;    // Kontrol deðerinin varsayýlan deðeri 0 olarak ata
            for(j=2; j<=i/2; j++){
                if( i % j == 0){
                    kontrol = 1;    // Kendisinden baþka bir sayýya bölünüyorsa kontrol deðiþkenini 1 yap
                    break;
                }
            }
            if(kontrol == 0){        // Kontrol deðiþkeni deðiþmedi ise sayý hiçbir sayýya bölünmemiþtir yani asaldýr
                printf("%d\n", i);
                sayac++;            // Toplam kaç adet asal sayý bulunduðunu sayýyoruz
            }
        }

        printf("Toplam %d tane asal sayi bulunmustur! \n", sayac);
    }
    return;
}

void EnKucukSayiyiBul(){
    int sayi1=0;
    int sayi2=0;
    int sayi3=0;
    int enkucuk=0;
    printf("Sayi 1 :");
    scanf("%d",&sayi1);
    printf("Sayi 2 :");
    scanf("%d",&sayi2);
    printf("Sayi 3 :");
    scanf("%d",&sayi3);

    if(sayi1<sayi2){
        enkucuk=sayi1;
    }else if(sayi2<sayi1){
        enkucuk=sayi2;
    }
    if(enkucuk>sayi3){
        enkucuk=sayi3;
    }
    printf("En Kucuk Sayi = %d \n",enkucuk);
    return;
}


int main()
{
    AsalSayiBulma();
    EnKucukSayiyiBul();
    printf("------------------------\n");
    return 0;
}
