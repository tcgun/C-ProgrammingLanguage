#include <stdio.h>

int main(){

    float boy, en, cevre, alan;

    /*
    *Uzunluk ve genişlik değerlerini kullanıcıdan al
    */
    printf("Dikdortgenin uzunlugunu giriniz: ");
    scanf("%f", &boy);
    printf("Dikdortgenin genisligini giriniz: ");
    scanf("%d", &en);

    /* Dikdörtgenin çevresini hesapla */
    cevre = 2 * (boy + en);

    /* Dikdörtgenin çevresini yazdır */
    printf("Dikdortgenin cevresi = %f birimdir\n", cevre);

    /* Dikdörtgenin alanını hesapla */
    alan = boy * en;

    /* Dikdörtgenin alanını yazdır */
    printf("Dikdortgenin alani = %f birim karedir", alan);

    return 0;
}