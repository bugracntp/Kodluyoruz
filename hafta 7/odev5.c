#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // Dosyayı oluşturma ve yazma işlemi
    file = fopen("metin.txt", "w");
    if (file == NULL) {
        printf("Dosya olusturma hatasi.\n");
        return 1;
    }

    printf("Metin girin: ");
    fgets(text, sizeof(text), stdin);
    fprintf(file, "%s", text);

    fclose(file);

    // Dosyayı okuma ve ekrana yazdırma işlemi
    file = fopen("metin.txt", "r");
    if (file == NULL) {
        printf("Dosya acma hatasi.\n");
        return 1;
    }

    printf("Dosya icerigi:\n");
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }

    fclose(file);

    return 0;
}
``
