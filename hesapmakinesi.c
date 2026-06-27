#include <stdio.h>
#include <math.h>

int main(){
    int secim = 0;
    int sayi1;
    int sayi2;
    int karekoksayi;
    int kupsayi;
    while (secim != 8){
    printf("1. Toplama\n");
    printf("2. Çıkarma\n");
    printf("3. Çarpma\n");
    printf("4. Bölme\n");
    printf("5. Kare\n");
    printf("6. Küp\n");
    printf("7. Karekök\n");
    printf("8. Çıkış\n");
    printf("Lütfen yapmak istediğiniz işlemi seçiniz:");
    if (scanf("%d", &secim) != 1) {
        printf("Lütfen geçerli bir menü numarası giriniz!\n");
        while (getchar() != '\n');
        secim = 0;
        continue;
    }

    if (secim > 8 || secim < 0 || secim == 0){
        printf("Geçersiz girdi!\n");
        continue;
    }

    if (secim == 8){
        printf("Çıkış yapılıyor!\n");
        return 0;
    }
    if (secim == 7){
        printf("Lütfen karekökünü almak istediğiniz sayıyı giriniz:");
        scanf("%d", &karekoksayi);
        if (karekoksayi < 0){
            printf("Negatif değer giremezsin!\n");
            continue;
        }
        else{
            printf("Sonuç:%.2f\n",sqrt(karekoksayi));
        }
        continue;
    }

    if (secim == 6){
        printf("Lütfen küpünü almak istediğiniz sayıyı giriniz:");
        scanf("%d", &kupsayi);
        printf("Sonuç:%.1f\n", (float)kupsayi*kupsayi*kupsayi);
        continue;
    }
        printf("İlk sayıyı giriniz:");
    if (scanf("%d", &sayi1) != 1){
        printf("Lütfen sayı giriniz!\n");
        while (getchar() != '\n');
        continue;
    }
    printf("İkinci sayıyı giriniz:");
    if (scanf("%d", &sayi2) != 1){
        printf("Lütfen sayı giriniz!\n");
        // while loop'unu engelleyen kısım
        while (getchar() != '\n');
        continue;
    }
    if (secim == 1){
        printf("Sonuç:%d\n", sayi1+sayi2);
    }
    else if (secim == 2){
        printf("Sonuç:%d\n", sayi1-sayi2);
    }
    else if (secim == 3){
        printf("Sonuç:%d\n",sayi1*sayi2);
    }
    else if (secim == 4){
        if (sayi2 == 0){
            printf("Sıfır ile bölme yapamazsın!\n");
        }
        else{
            printf("Sonuç:%.2f\n",(float)sayi1/sayi2);
        }
    }

    else if (secim == 5){
        printf("Sonuç:%.1f\n",(float)pow(sayi1, sayi2));
    }

}
    return 0;
}
