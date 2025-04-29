#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL; 


void insertAtHead(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory not allocated. \n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("Inserted %d at head.\n", value);
}


void insertAtTail(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory not allocated. \n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("Inserted %d at tail.\n", value);
}


void display() {
    if (head == NULL) {
        printf("Linked List is empty.\n");
        return;
    }
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


int main() {
    int choice, value;

    while (1) {
        printf("\n MENU \n");
        printf("1. Insert at Head\n");
        printf("2. Insert at Tail\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at head: ");
                scanf("%d", &value);
                insertAtHead(value);
                break;
            case 2:
                printf("Enter value to insert at tail: ");
                scanf("%d", &value);
                insertAtTail(value);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting. Mission Complete.\n");
                exit(0);
            default:
                printf("Invalid choice. You broke the rules.\n");
        }
    }
    return 0;
}
