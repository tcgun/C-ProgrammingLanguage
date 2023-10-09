#include <stdio.h>

int main() {
    int i; // Bir tamsayı değişkeni olan 'i' tanımlanır.

    i = 0; // 'i' değişkenine başlangıçta 0 değeri atanır.
    printf("%d\n", i); // 'i' değişkeninin değeri ekrana yazdırılır. (Çıktı: 0)

    printf("%d\n", i++); // 'i++' ifadesi, önce mevcut değeri yazdırır, sonra 'i' değerini artırır.
    // Bu nedenle, bu satırda 'i' değeri 0 olarak yazdırılır, ardından 1 artırılır.
    // Dolayısıyla, bu satırın çıktısı 0 olur, ancak 'i' değeri 1 olur.

    printf("%d\n", i); // 'i' değişkeninin güncellenmiş değeri ekrana yazdırılır. (Çıktı: 1)

    printf("%d\n", ++i); // '++i' ifadesi, önce 'i' değerini artırır, sonra artırılmış değeri yazdırır.
    // Bu nedenle, bu satırda 'i' değeri 2'ye artırılır ve sonra 2 olarak yazdırılır.

    printf("%d\n", i); // 'i' değişkeninin güncellenmiş değeri ekrana yazdırılır. (Çıktı: 2)

    return 0;
}
