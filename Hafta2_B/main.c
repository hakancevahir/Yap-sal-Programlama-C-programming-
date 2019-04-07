#include <stdio.h>
#include <stdlib.h>

void soru1()
{
    int kan;
    int yas;
    int test1;
    printf("*** X Hastaligi Teshis Programi *** \n");
    printf("Kan Basinci = ");
    scanf("%d",&kan);
    printf("Yas =");
    scanf("%d",&yas);
    printf("Test 1 =");
    scanf("%d",&test1);

    if(kan<100){
        printf("Kisi sagliklidir. \n");
    }else if(yas>50 && test1>=100){
        printf("Kisi hastadir. \n");
    }else if(yas>35 && test1>150){
        printf("Kisi hastadir. \n");
    }else if(yas<=35 && test1<100){
        printf("Kisi sagliklidir. \n");
    }
}

void soru2(){
    int sayi=0;
    int birler=0;
    int onlar;
    printf("4 basamakli bir sayi giriniz :");
    scanf("%d",&sayi);
    birler = sayi - ((sayi / 10)*10);
    onlar = (sayi - ((sayi/100)*100)- birler)/10;
    printf("birler  = %d \n",birler);
    printf("onlar   = %d \n",onlar);
    printf("carpimi = %d \n",onlar*birler);
}

int main()
{
    soru1();
    soru2();
    return 0;
}
