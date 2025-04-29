#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

inserAtSpecific(struct Node **head, int data, int pos){
  int k;

  struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));

  newNode->data=data;
  newNode->next = NULL;

  if(pos<=1){
    printf("Insert @ begin\n");
    newNode->next = *head;  
    *head = newNode;


  }
  else{
    struct Node *newNode = *head;
  }
}
void deleteAtBegin(struct Node **head)
{
  if(*head == NULL){
    printf("LinkedList is empty");
  }
  else{
    struct Node *temp = *head;

    *head = (*head)->next; 

    temp->next = NULL;
    printf(temp->data);
    free(temp);
    
  }
};


void insertAtHead(struct Node **head, int value)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  if (!newNode)
  {
    printf("Memory allocation failed. \n");
    exit(1);
  }
  newNode->data = value;
  newNode->next = *head;
  *head = newNode;
}

void insertAtTail(struct Node **head, int value)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  if (!newNode)
  {
    printf("Memory allocation failed.\n");
    exit(1);
  }
  newNode->data = value;
  newNode->next = NULL;

  if (*head == NULL)
  {
    *head = newNode;
    return;
  }

  struct Node *temp = *head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}


void display(struct Node *head)
{
  if (head == NULL)
  {
    printf("List is EMPTY. \n");
    return;
  }
  printf("Linked List: ");
  while (head != NULL)
  {
    printf("%d -> ", head->data);
    head = head->next;
  }
  printf("NULL\n");
}


int main()
{
  struct Node *head = NULL;
  int choice, value;

  while (1)
  {
    printf("\n MENU \n");
    printf("1. Insert at Head\n");
    printf("2. Insert at Tail\n");
    printf("3. Delete at Head\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter value to insert at head: ");
      scanf("%d", &value);
      insertAtHead(&head, value);
      break;

    case 2:
      printf("Enter value to insert at tail: ");
      scanf("%d", &value);
      insertAtTail(&head, value);
      break;

    case 3:
    deleteAtBegin(&head);
      break;
    case 4:
      display(head);
      break;

    case 5:
      display(head);////////////////////////////////////////////////////////////////////
      break;

    case 6:
      printf("Exiting...\n");
      exit(0);

    default:
      printf("Invalid choice.\n");
    }
  }

  return 0;
}
