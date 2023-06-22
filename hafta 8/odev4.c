#include <stdio.h>
#include <string.h>

struct Node {
    char word[100];
    struct Node* next;
};

void findWordsStartingWith(struct Node* head, const char* prefix) {
    printf("Baslayan kelimeler: ");
    struct Node* current = head;
    while (current != NULL) {
        if (strncmp(current->word, prefix, strlen(prefix)) == 0) {
            printf("%s ", current->word);
        }
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    strcpy(head->word, "apple");
    head->next = second;

    strcpy(second->word, "application");
    second->next = third;

    strcpy(third->word, "banana");
    third->next = NULL;

    const char* prefix = "app";
    findWordsStartingWith(head, prefix);

    free(head);
    free(second);
    free(third);

    return 0;
}
