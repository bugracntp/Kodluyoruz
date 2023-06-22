#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Bir kelime veya cumle girin: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    printf("Girilen kelime veya cumlenin uzunlugu: %d\n", length);

    return 0;
}
