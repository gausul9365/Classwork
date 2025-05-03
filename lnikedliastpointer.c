#include <stdio.h>
#include <stdlib.h>

//  Node Structure
struct Node {
    int data;
    struct Node* next;
};

// Create New Node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed! \n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

//  Insert at Head
void insertAtHead(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *headRef;
    *headRef = newNode;
}

//  Insert at End
void insertAtEnd(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);

    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    struct Node* temp = *headRef;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert at Specific Position
void insertAtPosition(struct Node** headRef, int data, int position) {
    struct Node* newNode = createNode(data);

    if (position == 0) {
        insertAtHead(headRef, data);
        return;
    }

    struct Node* temp = *headRef;
    for (int i = 0; i < position - 1; i++) {
        if (temp == NULL) {
            printf("Position out of bounds! Insertion failed.\n");
            free(newNode);
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds! Insertion failed.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

//delete
void deleteAtHead(struct Node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = *headRef;
    *headRef = (*headRef)->next;
    free(temp);
}


void deleteAtEnd(struct Node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if ((*headRef)->next == NULL) {
        free(*headRef);
        *headRef = NULL;
        return;
    }

    struct Node* temp = *headRef;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}


void deleteAtPosition(struct Node** headRef, int position) {
    if (*headRef == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if (position == 0) {
        deleteAtHead(headRef);
        return;
    }

    struct Node* temp = *headRef;
    for (int i = 0; i < position - 1; i++) {
        if (temp == NULL || temp->next == NULL) {
            printf("Position out of bounds! Deletion failed.\n");
            return;
        }
        temp = temp->next;
    }

    if (temp->next == NULL) {
        printf("Position out of bounds! Deletion failed.\n");
        return;
    }

    struct Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);
}

// Display the Linked List
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("Linked List is Empty \n");
        return;
    }

    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}


int main() {
    struct Node* head = NULL;
    int choice, data, position;

    while (1) {
        printf("\n==== LINKED LIST MENU ====\n");
        printf("1. Insert at Head\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Specific Position\n");
        printf("4. Delete at Head\n");
        printf("5. Delete at End\n");
        printf("6. Delete at Specific Position\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("==========================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter data to insert at head: ");
            scanf("%d", &data);
            insertAtHead(&head, data);
            break;

        case 2:
            printf("Enter data to insert at end: ");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            break;

        case 3:
            printf("Enter data to insert: ");
            scanf("%d", &data);
            printf("Enter position (0-based index): ");
            scanf("%d", &position);
            insertAtPosition(&head, data, position);
            break;

        case 4:
            deleteAtHead(&head);
            break;

        case 5:
            deleteAtEnd(&head);
            break;

        case 6:
            printf("Enter position (0-based index) to delete: ");
            scanf("%d", &position);
            deleteAtPosition(&head, position);
            break;

        case 7:
            displayList(head);
            break;

        case 8:
            printf("Exiting... See you in the next battle! ⚡\n");
            exit(0);

        default:
            printf("Invalid choice! \n");
        }
    }

    return 0;
}

