#include <stdio.h>
#include <string.h>

void terstenYazdir(char *ifade) {
    int uzunluk = strlen(ifade);
    
    for (int i = uzunluk - 1; i >= 0; i--) {
        printf("%c", ifade[i]);
    }
    
    printf("\n");
}
int main() {
    char ifade[100];
    printf("Bir ifade girin: ");
    fgets(ifade, sizeof(ifade), stdin);
    ifade[strcspn(ifade, "\n")] = '\0';
    printf("Tersten yazılmış hali: ");
    terstenYazdir(ifade);
    return 0;
}