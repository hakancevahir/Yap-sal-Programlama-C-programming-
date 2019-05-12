#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct veri{
    char isim[20];
    int calisanno;
    int maas;
};

void bilgigirisi(struct veri *liste){
    printf("Bilgi Girisi \n");


    for(int i=0;i<5;i++){
        printf("Calisan ismi :");
        scanf(" %s",liste[i].isim);
        printf("Calisan No   :");
        scanf("%d",&liste[i].calisanno);
        printf("Calisan Maasi:");
        scanf("%d",&liste[i].maas);
    }
    getch();
}

void bilgiyazdirma(struct veri *liste){
    for(int i=0;i<5;i++){
        printf("Calisan \n");
        printf("Ad Soyad     :");
        printf("%s \n",liste[i].isim);
        printf("Calisan No   :");
        printf("%d \n",liste[i].calisanno);
        printf("Ad Soyad     :");
        printf("%d \n",liste[i].maas);
        printf("--------------------------\n");
    }
    getch();
}

void siralama(struct veri *liste){
    struct veri gecici;

    for(int i=0;i<5;i++){
        for(int k=0;k<5;k++){
            if(liste[k].maas>liste[i].maas){
                gecici = liste[k];
                liste[k] = liste[i];
                liste[i]=gecici;
            }
        }
    }

}

int main()
{
    int secim;
    struct veri *liste = malloc(sizeof(struct veri) * 5);

    do{
        system("CLS");
        printf("1- Calisan Bilgi Girisi \n");
        printf("2- Bilgi Yazdirma \n");
        printf("3- Siralama \n");
        printf("4- Cikis \n");
        printf("----------------- \n");
        printf("Secim Yapiniz: ");
        scanf("%d",&secim);

        if(secim==1) { bilgigirisi(liste); }
        else if (secim==2) { bilgiyazdirma(liste); }
        else if (secim==3) { siralama(liste); }
    }while(secim!=4);



    printf("Program Bitti \n");
    getch();
    return 0;
}
