#include <stdio.h>
#include <string.h>

int main(){

    // Karakter dizilerini tanımla
    char metin1[20] = "Merhaba ";
    char metin2[] = "Dunya!";
    char metin3[20];

    // metin2'yi metin1'in ucuna ekle (sonuç metin1'de depolanır)
    strcat(metin1, metin2);

    // metin1'i yazdır
    printf("%s", metin1);
    printf("\n...\n");

    // metin1 içeriğini metin3'e kopyala
    strcpy(metin3, metin1);

    // metin3'ü yazdır
    printf("%s", metin3);
    printf("\n...\n");

    // metin1 ve metin3'ü karşılaştır ve sonucu yazdır
    /* Mevcut durumda:
    * metin1 = "Merhaba Dunya!"
    * metin2 = "Dunya!"
    * metin3 = "Merhaba Dunya!"
    */
    printf("%d\n", strcmp(metin1, metin3)); // 0 döndürecek (eşit oldukları için)
    printf("\n...\n");
    printf("%d\n", strcmp(metin1, metin2)); // 9 döndürecek (eşit olmadıkları için)
    printf("\n...\n");
    printf("%d\n", strcmp(metin2, metin1)); // -9 döndürecek (eşit olmadıkları için)
    printf("\n...\n");

    return 0;
}