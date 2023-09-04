#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char *dir;
    struct node *next;
};

int main(void) {
    struct node *head = NULL;
    char *fold = getenv("PATH");
    char *delemet = ":";
    char *token;
    struct node *p;

    // Allocate memory for the head node
    head = malloc(sizeof(struct node));
    if (head == NULL) {
        perror("Memory allocation failed");
        return 1;
    }
    head->next = NULL;

    p = head; // Save a reference to the original head

    while ((token = strtok(fold, delemet)) != NULL) {
        p->dir = strdup(token); // Copy the token to the node
        p->next = malloc(sizeof(struct node)); // Allocate memory for the next node
        if (p->next == NULL) {
            perror("Memory allocation failed");
            return 1;
        }
        p = p->next; // Move to the next node
        p->next = NULL; // Set the next pointer of the new node to NULL
        fold = NULL; // To continue tokenizing the same string
    }

    // Print the directories
    p = head;
    while (p != NULL) {
        printf("%s\n", p->dir);
        p = p->next;
    }

    // Free the allocated memory
    p = head;
    while (p != NULL) {
        struct node *temp = p;
        p = p->next;
        free(temp->dir);
        free(temp);
    }

    return 0;
}
