#include <stdio.h>

int main(){
    int secim;
    int sayi1;
    int sayi2;
    printf("1. Toplama\n");
    printf("2. Çıkarma\n");
    printf("3. Çarpma\n");
    printf("4. Bölme\n");
    printf("Lütfen yapmak istediğiniz işlemi seçiniz:");
    scanf("%d", &secim);
    printf("İlk sayıyı giriniz:");
    if (scanf("%d", &sayi1) != 1){
        printf("Lütfen sayı giriniz!\n");
        return 0;
    }
    printf("İkinci sayıyı giriniz:", &sayi2);
    if (scanf("%d", &sayi2) != 1){
        printf("Lütfen sayı giriniz!\n");
        return 0;
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
            return 0;
        }
        else{
            printf("Sonuç:%.2f\n",(float)sayi1/sayi2);
        }
    }
    else {printf("Geçersiz girdi!\n");

    }
    return 0;
}
