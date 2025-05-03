#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Create new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at Head 
void insertAtHead(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);

    if (*headRef == NULL) {
        newNode->next = newNode;
        *headRef = newNode;
        return;
    }

    struct Node* temp = *headRef;
    while (temp->next != *headRef) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = *headRef;
    *headRef = newNode;
}

// Display Circular List
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node* temp = head;
    printf("Circular List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

// Main Menu 
int main() {
    struct Node* head = NULL;
    int choice, data;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert at Head\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &data);
                insertAtHead(&head, data);
                break;
            case 2:
                display(head);
                break;
            case 3:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
