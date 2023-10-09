#include <stdio.h>

int main() {
    int sayi1 = 17, sayi2 = 5; // İki tamsayı değişkeni tanımlanır ve başlangıç değerleri atanır.

    int tamsayi_bolme_sonucu; // Tamsayı bölme sonucunu saklayacak değişken tanımlanır.
    float gercel_bolme_sonucu_float; // Float türünde gerçel bölme sonucunu saklayacak değişken tanımlanır.
    double gercel_bolme_sonucu_double; // Double türünde gerçel bölme sonucunu saklayacak değişken tanımlanır.
    int gercel_bolme_sonucu_float_tamsayi; // Float sonucun tamsayıya dönüştürülmüş hali için değişken tanımlanır.

    tamsayi_bolme_sonucu = sayi1 / sayi2; // İki tamsayıyı böler ve sonucu tamsayı değişkene atar.
    printf("Tamsayi Bolme Sonucu = %d\n", tamsayi_bolme_sonucu); // Tamsayı bölme sonucunu ekrana yazdırır.

    gercel_bolme_sonucu_float = (float) sayi1 / sayi2; // Bir sayıyı float'a dönüştürerek gerçel bölme yapar.
    printf("Gercel Bolme Sonucu (float) = %.20f\n", gercel_bolme_sonucu_float); // Float sonucu ekrana yazdırır.

    gercel_bolme_sonucu_double = (double) sayi1 / sayi2; // Bir sayıyı double'a dönüştürerek gerçel bölme yapar.
    printf("Gercel Bolme Sonucu (double) = %.20f\n", gercel_bolme_sonucu_double); // Double sonucu ekrana yazdırır.

    gercel_bolme_sonucu_float_tamsayi = (int) sayi1 / sayi2; // Gerçel bölme sonucunu tamsayıya dönüştürerek tamsayı bölme yapar.
    printf("Gercel Bolme Sonucu (float)'in Tamsayiya Donusturulmus Hali = %d\n", gercel_bolme_sonucu_float_tamsayi); // Dönüştürülmüş sonucu ekrana yazdırır.

    return 0;
}
