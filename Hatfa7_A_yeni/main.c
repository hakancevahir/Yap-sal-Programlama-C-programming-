#include <stdio.h>
#include <stdlib.h>

char *TersKopyala(char *metin){
    char *a;
    a = (char*)malloc(sizeof(char));
    int uzunluk;
    uzunluk = strlen(metin);
    for(int i=0;i<uzunluk;i++){
        a[i]=metin[uzunluk-(i+1)];
    }
    return a;
}

void HarfDonustur(char *metin){
    int fark = 'a' - 'A';
    int i=0;
    while (metin[i] != '\0') {

        if (metin[i] >= 'A' && metin[i] <= 'Z') {
            metin[i] += fark;
        } else if (metin[i] >= 'a' && metin[i] <= 'z') {
            metin[i] -= fark;
        }
        i++;
    }
}


int main()
{
    int i;
    char *metin;
    metin = (char*)malloc(sizeof(char));

    printf("Bir kelime giriniz :");
    scanf("%s",metin);
    metin = TersKopyala(metin);
    printf("%s \n",metin);
    HarfDonustur(metin);
    printf("%s \n",metin);


    return 0;
}
