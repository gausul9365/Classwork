#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int coeff;
    int pow;                                               
    struct Node* next;
} Node;

// Create a new node
Node* createNode(int coeff, int pow) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->coeff = coeff;
    newNode->pow = pow;
    newNode->next = NULL;
    return newNode;
}

// Insert node at end (pointer to pointer style)
void insert(Node** head, int coeff, int pow) {
    Node* temp = createNode(coeff, pow); 
    if (*head == NULL) {
        *head = temp;
        return;
    }
    Node* ptr = *head;
    while (ptr->next)
        ptr = ptr->next;
    ptr->next = temp;
}

// Display the polynomial
void printPoly(Node* poly) {
    while (poly) {
        printf("%dx^%d", poly->coeff, poly->pow);
        poly = poly->next;
        if (poly != NULL)
            printf(" + ");
    }
    printf("\n");
}


// Add two polynomials
Node* addPoly(Node* poly1, Node* poly2) {
    Node* result = NULL;

    while (poly1 && poly2) {
        if (poly1->pow > poly2->pow) {
            insert(&result, poly1->coeff, poly1->pow);
            poly1 = poly1->next;
        } else if (poly2->pow > poly1->pow) {
            insert(&result, poly2->coeff, poly2->pow);
            poly2 = poly2->next;
        } else {
            insert(&result, poly1->coeff + poly2->coeff, poly1->pow);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    while (poly1) {
        insert(&result, poly1->coeff, poly1->pow);
        poly1 = poly1->next;
    }

    while (poly2) {
        insert(&result, poly2->coeff, poly2->pow);
        poly2 = poly2->next;
    }

    return result;
}

// Subtract poly2 from poly1
Node* subPoly(Node* poly1, Node* poly2) {
    Node* result = NULL;

    while (poly1 && poly2) {
        if (poly1->pow > poly2->pow) {
            insert(&result, poly1->coeff, poly1->pow);
            poly1 = poly1->next;
        } else if (poly2->pow > poly1->pow) {
            insert(&result, -poly2->coeff, poly2->pow);
            poly2 = poly2->next;
        } else {
            insert(&result, poly1->coeff - poly2->coeff, poly1->pow);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    while (poly1) {
        insert(&result, poly1->coeff, poly1->pow);
        poly1 = poly1->next;
    }

    while (poly2) {
        insert(&result, -poly2->coeff, poly2->pow);
        poly2 = poly2->next;
    }

    return result;
}


// Add term to result (combine like powers)
void addTerm(Node** head, int coeff, int pow) {
    Node* temp = *head;
    while (temp) {
        if (temp->pow == pow) {
            temp->coeff += coeff;
            return;
        }
        temp = temp->next;
    }
    insert(head, coeff, pow);
}

// Multiply two polynomials
Node* multiplyPoly(Node* poly1, Node* poly2) {
    Node* result = NULL;

    for (Node* ptr1 = poly1; ptr1 != NULL; ptr1 = ptr1->next) {
        for (Node* ptr2 = poly2; ptr2 != NULL; ptr2 = ptr2->next) {
            int coeff = ptr1->coeff * ptr2->coeff;
            int pow = ptr1->pow + ptr2->pow;
            addTerm(&result, coeff, pow);
        }
    }

    return result;
}

int main() {
    Node *poly1 = NULL, *poly2 = NULL;

    
    insert(&poly1, 3, 3);
    insert(&poly1, 2, 2);
    insert(&poly1, 5, 0);

    insert(&poly2, 2, 2);
    insert(&poly2, 1, 0);

    printf("Poly1: ");
    printPoly(poly1);

    printf("Poly2: ");
    printPoly(poly2);

    Node* sum = addPoly(poly1, poly2);
    printf("Addition: ");
    printPoly(sum);

    Node* diff = subPoly(poly1, poly2);
    printf("Subtraction: ");
    printPoly(diff);

    Node* prod = multiplyPoly(poly1, poly2);
    printf("Multiplication: ");
    printPoly(prod);

 
    return 0;
}
