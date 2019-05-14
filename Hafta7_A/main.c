#include <stdio.h>
#include <stdlib.h>


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

void terskopyala(char *metin){

    char *kelime2;
    kelime2=(char*)malloc(sizeof(char)*50);

    int i=0;
    do{
        kelime2[i] = metin[(sizeof(metin)-i)];
        i++;
    }while(i<=sizeof(metin));

    i=0;
    do{
        metin[i] = kelime2[i];
        i++;
    }while(i<=sizeof(kelime2));
}


int main()
{
    char *kelime;
    kelime=(char*)malloc(sizeof(char)*50);

    printf("Bir metin giriniz :");
    scanf("%s",kelime);
    terskopyala(kelime);
    printf("%s \n",kelime);
    HarfDonustur(kelime);
    printf("%s \n",kelime);


    return 0;
}
