#include <stdio.h>
#include <stdlib.h>


struct hucre {
        int icerik;
        struct hucre *sonraki;
};

struct hucre* hucre_olustur(int icerik) {
        struct hucre *a;
        a = (struct hucre*)malloc(sizeof(struct hucre));
        if (a==NULL) {
                printf("Heap alaninda yer ayrilamadi.\n");
                exit(1);
        }
        a->icerik = icerik;
        a->sonraki = NULL;
        return a;
}
/*-------------------------------------------------------------*/
void liste_basina_ekle(int icerik, struct hucre **liste_basi) {
        struct hucre* a = hucre_olustur(icerik);
        a->sonraki = *liste_basi;
        *liste_basi = a;
}
/*-------------------------------------------------------------*/
void liste_sonuna_ekle(int icerik, struct hucre **liste_basi) {
        struct hucre* a = hucre_olustur(icerik);
        if(*liste_basi == NULL) {
                a->sonraki = *liste_basi;
                *liste_basi = a;
        }
        else {
                struct hucre* x = *liste_basi;
                while(x->sonraki != NULL) {
                        x = x->sonraki;
                }
                x->sonraki = a;
        }
}
/*-------------------------------------------------------------*/
void liste_yaz(struct hucre *liste_basi) {
        while(liste_basi != NULL) {
                printf("%d  -> ", liste_basi->icerik);
                liste_basi = liste_basi->sonraki;
        }
        printf("\n");
}

int main()
{
    struct hucre *liste = NULL;

    int icerik;
    int i;
    for(i=1;i<=5;i++){
        printf("%d. degeri giriniz :",i);
        scanf("%d",&icerik);
        liste_basina_ekle(icerik,&liste);
    }
        liste_yaz(liste);


    return 0;
}
