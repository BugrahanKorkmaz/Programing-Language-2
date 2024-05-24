#include <stdio.h>
#include <stdlib.h>



int hesapla(int x,int y){
    char ogrenci[100];
    int kalan,sum=0;
    float ortalama;

    for(int i=0;i<x;i++){
        printf("%d ogrencinin notu:",i+1);
        scanf("%d",&ogrenci[i]);

        sum+=ogrenci[i];

        if(ogrenci[i]<y){
            kalan++;
        }
    }
    ortalama=sum/x;
    printf("sinifin ortalamasi:%d",ortalama);

    return kalan;
}



int main(){

    int gecmenotu,ogrenci,kalan;

    printf("sinifta kac ogrenci var:");
    scanf("%d",&ogrenci);
    printf("gecme notu kac:");
    scanf("%d",&gecmenotu);

    kalan=hesapla(ogrenci,gecmenotu);
    printf("kalan ogrenci sayisi:%d", kalan);

    return 0;
}

//---------------------------------------------------

int bodyIndex(double height, double weight) {
    double bmi = weight / (height * height);
    if (bmi < 19) {
        return 1; 
    } else if (bmi <= 25) {
        return 2;
    } else if (bmi <= 30) {
        return 3; 
    } else {
        return 4; 
    }
}

int main() {
    double height, weight;
    int status;

    printf("Boyunuzu metre cinsinden giriniz (ornegin 1.75): ");
    scanf("%lf", &height);
    printf("Kilonuzu kilogram cinsinden giriniz: ");
    scanf("%lf", &weight);


    status = bodyIndex(height, weight);


    double bmi = weight / (height * height);
    printf("Vucut Kitle indeksiniz: %.2f\n", bmi);
    switch (status) {
        case 1:
            printf("Durum: Zayif\n");
            break;
        case 2:
            printf("Durum: Normal\n");
            break;
        case 3:
            printf("Durum: Kilolu\n");
            break;
        case 4:
            printf("Durum: Obez\n");
            break;
        default:
            printf("Gecersiz deger.\n");
            break;
    }

    return 0;
}