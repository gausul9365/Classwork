#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void insertAtBegin(struct Node **head_ref, int new_data)
{
  struct Node *new_Node = malloc(sizeof(struct Node));
  new_Node->data = new_data;

  if (*head_ref == NULL)
  {
    new_Node->next = new_Node;
    *head_ref = new_Node;
    return;
  }
  else
  {
    struct Node *temp = *head_ref;

    while (temp->next != *head_ref)
    {
      temp = temp->next;
    }

    new_Node->next = *head_ref;
    temp->next = new_Node;
    *head_ref = new_Node;
  }
}

void insertAtEnd(struct Node **head_ref, int new_data)
{
  struct Node *new_Node = malloc(sizeof(struct Node));
  new_Node->data = new_data;

  if (*head_ref == NULL)
  {
    new_Node->next = new_Node;
    *head_ref = new_Node;
    return;
  }

  struct Node *temp = *head_ref;

  while (temp->next != *head_ref)
  {
    temp = temp->next;
  }

  temp->next = new_Node;
  new_Node->next = *head_ref;
}

void insertAtPosition(struct Node **head_ref, int new_data, int position)
{
  struct Node *new_Node = malloc(sizeof(struct Node));
  new_Node->data = new_data;

  if (*head_ref == NULL && position == 1)
  {

    new_Node->next = new_Node;
    *head_ref = new_Node;
  }

  int count = 1;
  struct Node *temp = *head_ref;
  while (temp->next != *head_ref)
  {
    count++;
    temp = temp->next;
  }

  if (position < 1 || position > count + 1)
  {
    printf("Invalid position\n");
    return;
  }

  if (position == 1)
  {
    insertAtBegin(head_ref, new_data);
    return;
  }

  if (position == count + 1)
  {
    insertAtEnd(head_ref, new_data);
    return;
  }

  struct Node *current = *head_ref;

  for (int i = 1; i < position - 1; i++)
  {
    current = current->next;
  }
  new_Node->next = current->next;
  current->next = new_Node;
}

void deleteAtBegin(struct Node **head_ref)
{
  if (*head_ref == NULL)
  {
    printf("List is empty\n");
    return;
  }

  struct Node *head = *head_ref;
  if (head->next == *head_ref)
  {
    free(head);
    *head_ref = NULL;
    return;
  }

  struct Node *last = head;
  while (last->next != *head_ref)
  {
    last = last->next;
  }

  last->next = head->next;

  *head_ref = head->next;
  free(head);
}

void deleteAtEnd(struct Node **head_ref)
{
  if (*head_ref == NULL)
  {
    printf("List is empty\n");
  }

  struct Node *head = *head_ref;
  // none node there
  if (head->next == head)
  {
    free(head);
    *head_ref = NULL;
  }

  struct Node *temp = head;
  // secondLast
  while (temp->next->next != head)
  {
    temp = temp->next;
  }

  struct Node *last = temp->next;
  temp->next = head;
  free(last);
}

void display(struct Node *head_ref)
{

  if (head_ref == NULL)
    return;

  struct Node *temp = head_ref;
  do
  {
    printf("%d->", temp->data);
    temp = temp->next;
  } while (temp != head_ref);
  printf("NULL\n");
}

int main()
{
  struct Node *head = NULL;

  printf("insertion at begining\n");
  insertAtBegin(&head, 23);
  insertAtBegin(&head, 32);
  insertAtBegin(&head, 22);
  display(head);

  printf("Insert at End\n");
  insertAtEnd(&head, 51);
  display(head);

  printf("Insert at Position\n");
  insertAtPosition(&head, 12, 2);
  display(head);

  printf("Delete at Begin\n");
  deleteAtBegin(&head);
  display(head);

  printf("Delete At End\n");
  deleteAtEnd(&head);
  display(head);
}