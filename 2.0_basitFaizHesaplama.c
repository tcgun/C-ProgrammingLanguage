#include <stdio.h>

int main(){

    float ana_para, zaman, faiz_orani, faiz_miktari;

    /* Girdileri al */
    printf("Ana para miktarini giriniz: ");
    scanf("%f", &ana_para);

    printf("Zamani giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranini giriniz: ");
    scanf("%f", &faiz_orani);

    /* Basit faiz hesabı ile faiz miktarını hesapla */
    faiz_miktari = (ana_para * zaman * faiz_orani) / 100;

    /* Sonucu yazdır */
    printf("Basit faiz hesabi ile hesaplanan faiz miktari = %f", faiz_miktari);

    return 0;
}
