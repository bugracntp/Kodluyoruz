#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        while (!isalpha(str[left]) && left < right) {
            left++;
        }
        while (!isalpha(str[right]) && left < right) {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    char str[100];

    printf("Bir ifade girin: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("Girilen ifade bir palindromdur.\n");
    } else {
        printf("Girilen ifade bir palindrom değildir.\n");
    }

    return 0;
}
