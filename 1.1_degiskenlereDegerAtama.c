#include <stdio.h>

int main() {
    // İlk bölüm: x, y ve z değişkenlerine farklı değerler atanmıştır.
    int x = 5, y = 6, z = 50;

    // x, y ve z değerlerinin toplamını ekrana yazdırır.
    printf("%d", x + y + z);

    // "...\n" ifadesini ekrana yazdırır. Bu sadece bir ayrımcıdır.
    printf("\n...\n");

    // İkinci bölüm: x, y ve z değişkenlerine aynı değer atanmıştır (hepsi 50).
    x = y = z = 50;

    // x, y ve z değerlerinin toplamını ekrana yazdırır.
    printf("%d", x + y + z);

    return 0;
}
