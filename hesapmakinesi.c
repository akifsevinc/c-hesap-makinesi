#include <stdio.h>

int secim;
int sayi1;
int sayi2;

int main(){
	printf("Lütfen yapmak istediğiniz işlemi giriniz:\n");
	printf("1. toplama\n");
	printf("2. çıkarma\n");
	printf("3. çarpma\n");
        printf("4. bölme\n");
	scanf("%d", &secim);
	printf("Sayı giriniz:");
	scanf("%d", &sayi1);
	printf("Diğer sayıyı giriniz:");
	scanf("%d", &sayi2);

	if (secim == 1){
	printf("Sonuç:%d\n", sayi1+sayi2);
}
	else if (secim == 2){
	printf("Sonuç:%d\n", sayi1-sayi2);
}
	else if (secim == 3){
	printf("Sonuç:%d\n", sayi1*sayi2);
}
	else if (secim == 4){
	if (sayi1, sayi2 == 0){
	printf("Sıfır ile bölme yapamazsın!\n");
	return 0;
}
	else{
        printf("Sonuç: %.2f\n", (float)sayi1 / sayi2);
}
}
	else{
	printf("Geçersiz girdi!\n");
}
	return 0;
}
