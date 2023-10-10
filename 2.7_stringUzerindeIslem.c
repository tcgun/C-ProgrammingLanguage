#include <stdio.h>

int main() {
    // Bir karakter değişkeni oluşturulup 't' karakterine atanır ve ekrana yazdırılır.
    char karakter = 't';
    printf("%c\n", karakter);

    // Bir karakter dizisi (string) oluşturulup içine "Merhaba Dunya!" metni atanır ve ekrana yazdırılır.
    char karsilama_mesaji[] = "Merhaba Dunya!";
    printf("%s", karsilama_mesaji);

    return 0;
}