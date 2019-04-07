#include <stdio.h>
#include <conio.h>

 int main()
{
    int ay, yil;
    int gunsayisi;
    printf("Yil giriniz:");
    scanf("%d",&yil);
    printf("Ay giriniz:");
    scanf("%d",&ay);
    switch(ay)
    {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            gunsayisi=31;
            break;
        case 4: case 6: case 9: case 11:
            gunsayisi=30;
            break;
        case 2:
            if (yil%4==0&&yil%100!=0||yil%400==0&&yil%4000!=0)
                gunsayisi=29;
            else
                gunsayisi=28;
            break;
        default: gunsayisi=0;
    }
    printf("Gun sayisi: %d",gunsayisi);
    getch();
    return 0;
}
