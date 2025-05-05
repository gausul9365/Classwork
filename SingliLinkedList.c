#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

// ---------------------------------------------------------------------------insertionAtHead---------------
// insertion at head
void insertAtHead(struct Node **head_ref, int new_data)
{
  struct Node *newNode = malloc(sizeof(struct Node));

  newNode->data = new_data;
  newNode->next = *head_ref;
  *head_ref = newNode;
}
//----------------------------------------------------------------------------insertionAtTail---------------
// insertion At Tail

void insertionAtTail(struct Node **head_ref, int new_data)
{
  struct Node *new_Node = malloc(sizeof(struct Node));

  new_Node->data = new_data;
  new_Node->next = NULL;

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
}
//------------------------------------------------------------------------------ineertionAtSpecific------------------
// insrtion at Specific Position

void isnertionAtPos(struct Node **head_ref, int new_data, int pos)
{
  struct Node *new_Node = malloc(sizeof(struct Node));
  new_Node->data = new_data;

  if (pos == 1)
  {
    new_Node->next = *head_ref;
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
  new_Node->next = temp->next;
  temp->next = new_Node;
}
// ------------------------------------------------------------------------------deleting at head---------------------
// deleting at heat

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

// ---------------------------------------------------------------------------deleting at tail--------------------------

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

// ------------------------------------------------------------------------------deleting at position----------------------
void deleteAtPos(struct Node **head_ref, int position)
{
  if (*head_ref == NULL)
  {
    printf("List is empty.\n");
    return;
  }

  if (position == 1)
  {
    struct Node *temp = *head_ref;
    *head_ref = (*head_ref)->next;

    free(temp);
    return;
  }

  struct Node *temp = *head_ref;

  for (int i = 1; i < position - 1; i++)
  {
    if (temp == NULL || temp->next == NULL)
    {
      printf("List is Empty.");
      return;
    }

    temp = temp->next;
  }

  struct Node *toDelete = temp->next;

  if (toDelete == NULL)
  {
    printf("Position out of Bound\n");
    return;
  }

  temp->next = toDelete->next;

  free(toDelete);
}
//-------------------------------------------------------------------------------displaying------------------------------
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

  //------inserting---------

  printf("\nvalues inserting at head\n");
  insertAtHead(&head, 3);
  insertAtHead(&head, 4);
  insertAtHead(&head, 5);
  display(head);

  printf("\nvalues inserting at Tail\n");
  insertionAtTail(&head, 5);
  insertionAtTail(&head, 115);
  display(head);

  printf("\nvalues inserting at positon\n");
  isnertionAtPos(&head, 56, 4);
  display(head);

  // --------deleting------------------

  printf("\nDeletig at head\n");
  deletAtHead(&head);
  display(head);

  printf("\nDeletig at tail\n");
  deletAtTail(&head);
  display(head);

  printf("\nDeletig at position\n");
  deleteAtPos(&head, 2);
  display(head);

  struct Node *temp;

  while (head != NULL)
  {
    temp = head;
    head = head->next;
    free(temp);
  }
  return 0;
}
