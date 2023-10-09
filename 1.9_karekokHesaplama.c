#include <stdio.h>
#include <math.h>  // sqrt() fonksiyonunu kullanabilmek için

int main(){

    double sayi, karekok;

    /* Kullanıcıdan sayı değeri al */
    printf("Karekoku hesaplanacak sayiyi giriniz: ");
    scanf("%lf", &sayi);

    /* Sayının karekökünü hesapla */
    karekok = sqrt(sayi);

    /* Sonucu yazdır */
    printf("%.2lf sayisinin karekoku = %.2lf", sayi, karekok);

    return 0;
}