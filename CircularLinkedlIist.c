#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

// -----------------------------------------insertiona at position-----------------------------------------
void insertAtPosition(struct Node **head_ref, int data, int pos)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;

  if (*head_ref == NULL)
  {
    if (pos == 1)
    {
      newNode->next = newNode;
      *head_ref = newNode;
    }
    else
    {
      printf("Invalid position for empty list!\n");
      free(newNode);
    }
    return;
  }

  
  if (pos == 1)
  {
    struct Node *temp = *head_ref;
    while (temp->next != *head_ref)
      temp = temp->next;

    newNode->next = *head_ref;
    temp->next = newNode;
    *head_ref = newNode;
    return;
  }

  struct Node *temp = *head_ref;
  int count = 1;
  while (count < pos - 1 && temp->next != *head_ref)
  {
    temp = temp->next;
    count++;
  }

  if (count < pos - 1)
  {
    printf("Position out of bounds\n");
    free(newNode);
    return;
  }

  newNode->next = temp->next;
  temp->next = newNode;
}

//--------------------Insert at End------------------------------------------------
void insertAtEnd(struct Node **head_ref, int data)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;

  if (*head_ref == NULL)
  {
    newNode->next = newNode;
    *head_ref = newNode;
    return;
  }

  struct Node *temp = *head_ref;
  while (temp->next != *head_ref)
    temp = temp->next;

  temp->next = newNode;
  newNode->next = *head_ref;
}
//------------------------------------------------------insert at begining-----------------------
void insertAtBeginning(struct Node **head_ref, int data)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;

  if (*head_ref == NULL)
  {
    newNode->next = newNode;
    *head_ref = newNode;
    return;
  }

  struct Node *temp = *head_ref;  
  while (temp->next != *head_ref)
    temp = temp->next;

  newNode->next = *head_ref;
  temp->next = newNode;
  *head_ref = newNode;
}

void display(struct Node *head)
{
  if (head == NULL)
  {
    printf("List is empty\n");
    return;
  }

  struct Node *temp = head;
  do
  {
    printf("%d -> ", temp->data);
    temp = temp->next;
  } while (temp != head);
}

int main()
{
  struct Node *head = NULL;

  printf("\nInserting at beginning:\n");
  insertAtBeginning(&head, 10);
  display(head);

  printf("\nInsertion at End\n");
  insertAtEnd(&head, 20);
  insertAtEnd(&head, 30);
  insertAtEnd(&head, 40);
  display(head);

  printf("\nInsertion at Position\n");
  insertAtPosition(&head, 5, 1);
  display(head);

  return 0;
}
