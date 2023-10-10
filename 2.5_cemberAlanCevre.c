#include <stdio.h>

int main() {

    float yaricap, cap, cevre, alan;

    /* Değişkenlerin tanımlandığı satır. */

    /*
    * Kullanıcıdan yarıçap bilgisini al
    */
    printf("Cemberin/Dairenin yaricapini giriniz: "); // Kullanıcıdan yarıçap girmesini isteyen mesaj.
    scanf("%f", &yaricap); // Kullanıcının girdiği yarıçapı yaricap değişkenine alır.

    /*
    * Çap, çevre ve alan değerlerini hesapla
    */
    cap = 2 * yaricap; // Çap hesaplama formülü.
    cevre = 2 * 3.14 * yaricap; // Çevre hesaplama formülü (pi = 3.14 kullanılmış).
    alan = 3.14 * (yaricap * yaricap); // Alan hesaplama formülü (pi = 3.14 kullanılmış).

    /*
    * Tüm sonuçları yazdır
    */
    printf("Cemberin capi = %.2f birimdir \n", cap); // Çapı yazdırır (%.2f, 2 ondalık basamaklı float olarak yazdırır).
    printf("Cemberin cevresi = %.2f birimdir \n", cevre); // Çevreyi yazdırır (%.2f, 2 ondalık basamaklı float olarak yazdırır).
    printf("Cemberin alani = %.2f birim karedir ", alan); // Alanı yazdırır (%.2f, 2 ondalık basamaklı float olarak yazdırır).

    return 0; // Programın başarıyla tamamlandığını işaret eder.
}