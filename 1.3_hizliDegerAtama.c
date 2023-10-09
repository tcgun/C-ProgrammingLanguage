#include <stdio.h>

int main() {
    int i = 3; // İlk olarak i değişkenine 3 değeri atanır
    printf("%d\n", i); // İlk değeri ekrana yazdırır (3)

    i += 5; // i'ye 5 eklenir (i = i + 5)
    printf("%d\n", i); // Güncellenmiş değeri ekrana yazdırır (8)

    i -= 5; // i'den 5 çıkarılır (i = i - 5)
    printf("%d\n", i); // Güncellenmiş değeri ekrana yazdırır (3)

    i *= 3; // i'yi 3 ile çarpar (i = i * 3)
    printf("%d\n", i); // Güncellenmiş değeri ekrana yazdırır (9)

    i /= 3; // i'yi 3'e böler (i = i / 3)
    printf("%d\n", i); // Güncellenmiş değeri ekrana yazdırır (3)

    return 0;
}
