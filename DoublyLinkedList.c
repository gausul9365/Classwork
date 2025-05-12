#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *prev;
  struct Node *next;
};
void insertAtHead(struct Node **head_ref, int new_data)
{
  struct Node *newNode = malloc(sizeof(struct Node));

  newNode->data = new_data;
  newNode->next = *head_ref;
  (*head_ref)->prev = newNode;
  newNode->prev = NULL;
  *head_ref = newNode;
}

void insertionAtTail(struct Node **head_ref, int new_data)
{
  struct Node *new_Node = malloc(sizeof(struct Node));

  new_Node->data = new_data;
  new_Node->next = NULL;
  new_Node->prev = NULL;

  if (*head_ref == NULL)
  {
    *head_ref = new_Node;
  }

  struct Node *temp = *head_ref;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  temp->next = new_Node;
  new_Node->prev = temp;
}

void isnertionAtPos(struct Node **head_ref, int new_data, int pos)
{
  struct Node *new_Node = malloc(sizeof(struct Node));
  new_Node->data = new_data;
  new_Node->next = NULL;
  new_Node->prev = NULL;

  if (pos <= 1)
  {
    new_Node->next = *head_ref;
    (*head_ref)->prev = new_Node;
    *head_ref = new_Node;
    return;
  }

  struct Node *temp = *head_ref;

  for (int i = 1; i < pos - 1 && temp != NULL; i++)
  {
    temp = temp->next;
  }
  if (temp == NULL)
  {
    printf("Position out of Bound!");
    free(new_Node);
    return;
  }
  new_Node->prev = temp;
  new_Node->next = temp->next;
  temp->next = new_Node;
  temp->next->prev = new_Node;
  // temp->next->prev = new_Node;
  // new_Node->prev = temp;
  // new_Node->next = temp->next;
  // temp->next = new_Node;
}

void deletAtHead(struct Node **head_ref)
{
  if (*head_ref == NULL)
  {
    printf("List is Empty");
    return;
  }

  struct Node *temp = *head_ref;

  *head_ref = (*head_ref)->next;
  free(temp);
}

void deletAtTail(struct Node **head_ref)
{
  if (*head_ref == NULL)
  {
    printf("List is Empty");
    return;
  }

  if ((*head_ref)->next == NULL)
  {
    free(*head_ref);
    *head_ref = NULL;
    return;
  }

  struct Node *temp = *head_ref;

  while (temp->next->next != NULL)
  {
    temp = temp->next;
  }

  free(temp->next);
  temp->next = NULL;
}

void deleteAtPosition(struct Node **head_ref, int position)
{
  if (*head_ref == NULL)
  {
    printf("List is empty. Nothing to delete.\n");
    return;
  }

  struct Node *temp = *head_ref;

  for (int i = 1; temp != NULL && i < position; i++)
    temp = temp->next;

  if (temp == NULL)
  {
    printf("Invalid position.\n");
    return;
  }

  if (temp == *head_ref)
    *head_ref = temp->next;

  if (temp->next != NULL)
    temp->next->prev = temp->prev;

  if (temp->prev != NULL)
    temp->prev->next = temp->next;

  free(temp);
}

void display(struct Node *head)
{
  while (head != NULL)
  {
    printf("%d -> ", head->data);
    head = head->next;
  }

  printf("NUll \n");
}

int main()
{
  struct Node *head = NULL;
  insertAtHead(&head, 56);
  insertAtHead(&head, 56);
  insertAtHead(&head, 56);
  insertAtHead(&head, 56);
  insertAtHead(&head, 5);
  display(head);

  insertionAtTail(&head, 67);
  display(head);

  isnertionAtPos(&head, 100, 3);
  display(head);

  deletAtHead(&head);
  display(head);

  deletAtHead(&head);
  display(head);
}