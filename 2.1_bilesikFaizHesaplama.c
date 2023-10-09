#include <stdio.h>
#include <math.h>  // sqrt() fonksiyonunu kullanabilmek için

int main(){

    float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;

    /* Girdileri al */
    printf("Ana para miktarini giriniz: ");
    scanf("%f", &ana_para);

    printf("Zamani giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranini giriniz: ");
    scanf("%f", &faiz_orani);

    /* Basit faiz hesabı ile faiz miktarını hesapla */
    basit_faiz_miktari = (ana_para * zaman * faiz_orani) / 100;

    /* Basit faiz hesabının sonucu yazdır */
    printf("Basit faiz hesabi ile hesaplanan faiz miktari = %f\n", basit_faiz_miktari);

    /* Bieşik faiz hesabı ile faiz miktarını hesapla */
    bilesik_faiz_miktari = ana_para * (pow((1 + faiz_orani / 100), zaman));

    /* Bileşik faiz hesabının sonucu yazdır */
    printf("Bilesik faiz hesabi ile hesaplanan faiz miktari = %f", bilesik_faiz_miktari);

    return 0;
}