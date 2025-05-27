#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Stack
{
  struct Node *top;
};

void initStack(struct Stack *stack)
{
  stack->top = NULL;
}

int isEmpty(struct Stack *stack)
{
  return stack->top == NULL;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int value)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  if (!newNode)
  {
    printf("Memory allocation failed!\n");
    return;
  }
  newNode->data = value;
  newNode->next = stack->top;
  stack->top = newNode;
  printf("Pushed %d to the stack.\n", value);
}

// Function to pop an element from the stack
int pop(struct Stack *stack)
{
  if (isEmpty(stack))
  {
    printf("Stack is empty! Nothing to pop.\n");
    return -1;
  }
  struct Node *temp = stack->top;
  int poppedValue = temp->data;
  stack->top = stack->top->next;
  free(temp);
  return poppedValue;
}

// Function to peek the top element of the stack
int peek(struct Stack *stack)
{
  if (isEmpty(stack))
  {
    printf("Stack is empty! Nothing to peek.\n");
    return -1;
  }
  return stack->top->data;
}

// Function to display the elements of the stack
void display(struct Stack *stack)
{
  if (isEmpty(stack))
  {
    printf("Stack is empty!\n");
    return;
  }
  struct Node *current = stack->top;
  printf("Stack contents (Top to Bottom):\n");
  while (current != NULL)
  {
    printf("%d\n", current->data);
    current = current->next;
  }
}

int main()
{
  struct Stack stack;
  initStack(&stack);

  int choice, value;
  while (1)
  {
    printf("\n--- Stack Menu ---\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter value to push: ");
      scanf("%d", &value);
      push(&stack, value);
      break;

    case 2:
      value = pop(&stack);
      if (value != -1)
      {
        printf("Popped %d from the stack.\n", value);
      }
      break;

    case 3:
      value = peek(&stack);
      if (value != -1)
      {
        printf("Top element: %d\n", value);
      }
      break;

    case 4:
      display(&stack);
      break;

    case 5:
      printf("Exiting program...\n");
      exit(0);

    default:
      printf("Invalid choice! Please try again.\n");
    }
  }

  return 0;
}
