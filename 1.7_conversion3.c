#include <stdio.h>

int main() {
    float cm, metre, km;

    /* Uzunluğu santimetre cinsinden al */
    printf("Uzunlugu santimetre cinsinden giriniz: ");
    scanf("%f", &cm); // Kullanıcıdan santimetre cinsinden uzunluğu alır ve "cm" değişkenine kaydeder.

    /* Çevrim işlemlerini gerçekleştir */
    metre = cm / 100.0; // Santimetreyi metreye çevirir. 1 metre = 100 santimetre olduğu için 100'e böler.
    km = cm / 100000.0; // Santimetreyi kilometreye çevirir. 1 kilometre = 100,000 santimetre olduğu için 100,000'e böler.

    /* Sonuçları ekrana yazdır */
    printf("Metre cinsinden uzunluk = %.4f m\n", metre); // Metre cinsinden uzunluğu ekrana yazdırır.
    printf("Kilometre cinsinden uzunluk = %.4f km", km); // Kilometre cinsinden uzunluğu ekrana yazdırır.

    return 0;
}
