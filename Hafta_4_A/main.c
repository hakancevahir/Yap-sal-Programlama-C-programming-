#include <stdio.h>
#include <stdlib.h>

int menu(){
    int secim;
    printf("1- Oyuna Basla (1) \n");
    printf("2- Oyunu Bitir (-1) \n");
    printf("Secim Gir :");

    scanf("%d",&secim);
    return secim;
}

void oyun(int secenek){
    int adim=0;
    int sayi=50;
    int tahmin=0;
    do{
        printf("Tahmin Yap :");
        scanf("%d",&tahmin);
        adim++;
        if(tahmin==sayi){
            printf("Sayiyi %d adimda buldunuz TEBRIKLER \n",adim);
            break;
        }else if(tahmin>sayi){
            printf("Daha Kucuk ");
        }else if(tahmin<sayi){
            printf("Daha Buyuk ");
        }
    }while(tahmin!=sayi);

    return 1;
}

int main()
{
    int oyn=0;
    int secenek=0;
    do{
        secenek = menu();
        printf("%d \n",secenek);
        if(secenek==1){
            oyun(secenek);
        }else{
            printf("Hatali secim yaptiniz. Tekrar secim yapiniz.\n");
        }
    }while(secenek!=1);

    printf("GAME OVER");
    return 0;
}
