#include <stdio.h>
#include <stdlib.h>

void soru1(){
    int notu;
    char *harfnotu;
    printf("Basari Notunu Giriniz:");
    scanf("%d",&notu);

    if(notu>=90 && notu<=100){ harfnotu = "AA"; }
    else if(notu>=85 && notu<=89){ harfnotu = "BA"; }
    else if(notu>=80 && notu<=84){ harfnotu = "BB"; }
    else if(notu>=70 && notu<=79){ harfnotu = "CB"; }
    else if(notu>=60 && notu<=69){ harfnotu = "CC"; }
    else if(notu>=55 && notu<=59){ harfnotu = "DC"; }
    else if(notu>=50 && notu<=54){ harfnotu = "DD"; }
    else if(notu>=40 && notu<=49){ harfnotu = "FD"; }
    else if(notu>=0 && notu<=39){ harfnotu = "FF"; }


    printf("Harf notu %s \n\n", harfnotu);
}

void soru2(){
    int sayi;
    int onlar;
    printf("3 basamakli bir sayi giriniz :");
    scanf("%d",&sayi);
    onlar = (((sayi/10)*10)-((sayi/100)*100))/10;
    printf("onlar basamagindaki rakam = %d \n",onlar);

    if(onlar%2==0){ printf("%d cift sayidir\n\n",onlar);}
    else{ printf("%d tek sayidir\n\n",onlar);    }

}


int main()
{
    soru1();
    soru2();
    return 0;
}
