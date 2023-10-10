#include <stdio.h>

int main(){

    int sayi1, sayi2, toplam;

    /* Kullanıcıya mesaj yaz */
    printf("Iki sayi giriniz: ");

    /* İki değeri kullanıcıdan al */
    scanf("%d%d", &sayi1, &sayi2);

    /* Sayıları topla */
    toplam = sayi1 + sayi2;

    /* Toplamı yazdır*/
    printf("Sum = %d", toplam);

    return 0;
}