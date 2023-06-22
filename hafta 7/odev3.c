#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Birinci sayiyi girin: ");
    scanf("%d", ptr1);

    printf("Ikinci sayiyi girin: ");
    scanf("%d", ptr2);

    printf("Birinci sayi: %d\n", *ptr1);
    printf("Ikinci sayi: %d\n", *ptr2);

    return 0;
}
