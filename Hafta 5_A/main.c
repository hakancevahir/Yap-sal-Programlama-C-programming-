#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int asalSayi(int x, int i) {
    if (x < 2)
        return 0;
    if (i == 1)
        return 1;
    if (x % i == 0)
        return 0;
    return asalSayi(x, i - 1);
}

int sayicarpimi(int s1,int s2){
    return s1*s2;
}

void menu(){
    int secim=0;
    do {

        printf("1. Asal sayi bulma\n");
        printf("2. Sayi carpimi\n");
        printf("3. Cikis\n");
        printf("Secim Yapiniz :");
        scanf("%d",&secim);

        switch(secim)
        {
        case 1:
            printf("ASAL SAYI BULMA\n");
            /***** ASAL SAYI *******************************/
                int sayi;
                printf("Bir sayi giriniz :");
                scanf("%d",&sayi);
                int sonuc = asalSayi(sayi, sayi / 2);
                if (sonuc == 0)
                    printf("%d asal sayi degildir\n", sayi);
                else
                    printf("%d asal sayidir\n", sayi);
            /***** ASAL SAYI *******************************/
            printf("* Menu'ye girmek icin bir tusa basiniz\n\n");
            break;
        case 2:
            printf("SAYI CARPIMI\n");
            srand(time(NULL));
            int sayi1;
            int sayi2;
            sayi1=(rand()%20)+1;
            sayi2=(rand()%99)+2;
            printf("Sayi1 = %d  ", sayi1);
            printf("Sayi2 = %d \n",sayi2);
            printf("Sayilarin Carpimi = %d \n",sayicarpimi(sayi1,sayi2));
            printf("* Menu'ye girmek icin bir tusa basiniz\n\n");
            break;
        case 3:
            printf("* Cikis icin bir tusa basiniz\n\n");
            break;
        default:
            printf("Hatali secim yaptiniz \n");
            printf("* Menu'ye girmek icin bir tusa basiniz\n\n");
            break;
        }

        getch();
    }
    while(secim!=3);

    printf("Program Sonlandirildi");
}


int main()
{
    menu();
    return 0;
}
