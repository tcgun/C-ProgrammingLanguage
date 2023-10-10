#include <stdio.h>

int main(){
    // İlk karakter dizisi tanımlanıyor
    char karsilama_mesaji1[] = "Merhaba!";

    // İkinci karakter dizisi tanımlanıyor, her karakter açıkça belirtiliyor
    char karsilama_mesaji2[] = {'M', 'e', 'r', 'h', 'a', 'b', 'a', '!', '\0'};

    // İlk dizinin boyutu `sizeof` operatörü ile alınıp yazdırılıyor
    printf("%lu\n", sizeof(karsilama_mesaji1));

    // Diziler arasında bir ayrım koyabilmek için boş satır eklendi
    printf("\n...\n");

    // İkinci dizinin boyutu `sizeof` operatörü ile alınıp yazdırılıyor
    printf("%lu\n", sizeof(karsilama_mesaji2));

    return 0;
}