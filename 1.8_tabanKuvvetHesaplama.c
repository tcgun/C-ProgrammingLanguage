#include <stdio.h>
#include <math.h>  // pow() fonksiyonunu kullanabilmek için

int main() {
    double taban, kuvvet, sonuc;

    /* Kullanıcıdan iki sayı al */
    printf("Taban degerini giriniz: ");
    scanf("%lf", &taban); // Kullanıcıdan taban değerini alır ve "taban" değişkenine kaydeder.
    printf("Kuvvet degerini giriniz: ");
    scanf("%lf", &kuvvet); // Kullanıcıdan kuvvet değerini alır ve "kuvvet" değişkenine kaydeder.

    /* taban^kuvvet değerini hesapla */
    sonuc = pow(taban, kuvvet); // "taban" üzeri "kuvvet" işlemi, pow() fonksiyonu kullanılarak hesaplanır ve "sonuc" değişkenine atanır.

    /* Sonucu ekrana yazdır */
    printf("%.2lf ^ %.2lf = %.2lf", taban, kuvvet, sonuc); // Sonucu ekrana belirli bir ondalık hassasiyetle yazdırır.

    return 0;
}
