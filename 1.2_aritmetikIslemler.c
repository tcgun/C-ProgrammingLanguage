#include <stdio.h>

int main() {
    // İki tane tamsayı değişkeni tanımlanır: sayi1 ve sayi2
    int sayi1, sayi2;

    // Toplam, fark, çarpım, bölüm ve mod sonuçları için değişkenler tanımlanır.
    int toplam, fark, carpim, mod;
    float bolum;

    // Kullanıcıdan iki sayı alınır ve sayi1 ve sayi2 değişkenlerine atanır.
    printf("Lutfen iki sayi giriniz: ");
    scanf("%d%d", &sayi1, &sayi2);

    // Aritmetik işlemler gerçekleştirilir.
    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    carpim = sayi1 * sayi2;

    // Bölüm işlemi yapılırken sayi1'in float'a dönüştürülmesi gereklidir.
    bolum = (float)sayi1 / sayi2;
    mod = sayi1 % sayi2;

    // Sonuçlar ekrana yazdırılır.
    printf("Toplam = %d\n", toplam);
    printf("Fark = %d\n", fark);
    printf("Carpim = %d\n", carpim);
    printf("Bolum = %f\n", bolum);
    printf("Kalan veya Modulo = %d", mod);

    return 0;
}
