#include <stdio.h>
#include <string.h>

int main(){
    char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(ingiliz_alfabesi));  // İngiliz alfabesinin karakter sayısını yazdırır.
    printf("\n...\n");
    printf("%d", sizeof(ingiliz_alfabesi));   // İngiliz alfabesinin toplam boyutunu (bayt cinsinden) yazdırır.
    printf("\n.............\n");

    char turk_alfabesi[] = "ABCÇDEFGĞHIİJKLMNOÖPRSŞTUÜVYZ";
    printf("%d", strlen(turk_alfabesi));    // Türk alfabesinin karakter sayısını yazdırır.
    printf("\n...\n");
    printf("%d", sizeof(turk_alfabesi));     // Türk alfabesinin toplam boyutunu (bayt cinsinden) yazdırır.
    printf("\n.............\n");

    char deneme[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(deneme));   // "deneme" karakter dizisinin karakter sayısını yazdırır.
    printf("\n...\n");
    printf("%d", sizeof(deneme));   // "deneme" karakter dizisinin toplam boyutunu (bayt cinsinden) yazdırır.

    return 0;
}