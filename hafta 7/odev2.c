#include <stdio.h>

unsigned long long factorial(int n) {
    return n == 0 ? 1 : n * factorial(n - 1);
}

int main() {
    int num;

    printf("Bir sayi girin: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negatif sayilarin faktoriyeli hesaplanamaz.\n");
    } else {
        unsigned long long result = factorial(num);
        printf("%d sayisinin faktoriyeli: %llu\n", num, result);
    }

    return 0;
}