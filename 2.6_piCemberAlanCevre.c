#include <stdio.h>
#include <math.h>  // M_PI sayısını kullanmak amacıyla

int main() {
    float yaricap, cap, cevre, alan;

    /*
    * Kullanıcıdan yarıçap bilgisini al
    */
    printf("Cemberin/Dairenin yaricapini giriniz: ");
    scanf("%f", &yaricap);

    /*
    * Çap, çevre ve alan değerlerini hesapla
    */
    cap = 2 * yaricap;  // Çapı hesapla: Çap = 2 * Yarıçap
    cevre = 2 * M_PI * yaricap;  // Çevreyi hesapla: Çevre = 2 * π * Yarıçap
    alan = M_PI * (yaricap * yaricap);  // Alanı hesapla: Alan = π * (Yarıçap * Yarıçap)

    /*
    * Tüm sonuçları yazdır
    */
    printf("Cemberin capi = %.2f birimdir \n", cap);  // Çap sonucunu yazdır
    printf("Cemberin cevresi = %.2f birimdir \n", cevre);  // Çevre sonucunu yazdır
    printf("Cemberin alani = %.2f birim karedir ", alan);  // Alan sonucunu yazdır

    return 0;
}