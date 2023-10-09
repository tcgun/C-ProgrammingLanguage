#include <stdio.h>

int main() {
    int a = 35; // 10'luk sayı düzeninde (decimal) bir tam sayı (35)

    int b = 0b00100011; // 2'lik sayı düzeninde (binary) bir tam sayı (35)

    int c = 0x23; // 16'lık sayı düzeninde (hexadecimal) bir tam sayı (35)

    printf("a = %d\n", a); // a değişkeninin değerini 10'luk sayı düzeninde ekrana yazdırır. (Çıktı: a = 35)
    printf("b = %d\n", b); // b değişkeninin değerini 10'luk sayı düzeninde ekrana yazdırır. (Çıktı: b = 35)
    printf("c = %d\n", c); // c değişkeninin değerini 10'luk sayı düzeninde ekrana yazdırır. (Çıktı: c = 35)

    return 0;
}
