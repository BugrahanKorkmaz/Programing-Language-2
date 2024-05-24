#include <stdio.h>
#include <stdlib.h>

int toplam(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + toplam(n - 1);
    }
}

int main() {
    int sayi;

    printf("Bir dogal sayi giriniz: ");
    scanf("%d", &sayi);

    int sonuc = toplam(sayi);

    printf("0'dan %d'ye kadar olan sayilarin toplami: %d\n", sayi, sonuc);

    return 0;
}

//---------------------------------------------------



int findMax(int arr[], int n) {
  
    if (n == 1) {
        return arr[0];
    }

    int maxInRest = findMax(arr, n - 1);

    if (arr[n - 1] > maxInRest) {
        return arr[n - 1];
    } else {
        return maxInRest;
    }
}

int main() {
    int n;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);

    int arr[n];
    printf("Dizinin elemanlarini giriniz:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxElement = findMax(arr, n);

    printf("Dizideki en buyuk eleman: %d\n", maxElement);

    return 0;
}

//---------------------------------------------------
int calcsayi(int sayi){

    if(sayi==0)
        return 0;
    
    else
        return (sayi % 10) + calcsayi(sayi / 10);
    
}

int main(){
    int sayi;

    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    printf("basamaklarinin toplami:%d",calcsayi(sayi));

    return 0;
}

//---------------------------------------------------


int gcd(int a, int b) {

    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Birinci sayiyi girin: ");
    scanf("%d", &num1);
    printf("Ikinci sayiyi girin: ");
    scanf("%d", &num2);

    int result = gcd(num1, num2);
    printf("%d ve %d sayilarinin en buyuk ortak boleni: %d\n", num1, num2, result);

    return 0;
}