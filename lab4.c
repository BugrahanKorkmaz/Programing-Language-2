#include <stdio.h>

int odd(int arr[], int i, int count) {
    if (i < 0) {
        return count;
    }
    if (arr[i] % 2 == 0) {
        if (arr[i] == 0) {
            return count;
        } else {
            return odd(arr, i - 1, count);
        }
    } else if (arr[i] % 2 == 1) {
        count = count + 1;
        return odd(arr, i - 2, count);
    }
    return count; 
}

int main() {
    int i, j, count = 0;
    printf("Eleman sayisini giriniz: ");
    scanf("%d", &i);

    int arr[i];
    for (int x = 0; x < i; x++) {
        arr[x] = x;
    }

    j = odd(arr, i - 1, count);

    printf("%d tane tek sayi var\n", j);
    return 0;
}
