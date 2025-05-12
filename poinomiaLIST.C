#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct node
{
  int coeff;
  int exp;
  struct node *next;
};

// function to create neew term

struct node *createNode(int coeff, int exp)
{
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->coeff = coeff;
  newNode->exp = exp;
  newNode->next = NULL;
  return newNode;
}

void insertTerm(struct node **poly, int coeff, int exp)
{
  struct node *temp = *poly;
  struct node *newNode = createNode(coeff, exp);
  if (*poly == NULL)
  {
    *poly = newNode;
  }
  else
  {
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}

// function to add two polynomial

struct node *addPolynomials(struct node *poly1, struct node *poly2)
{
  struct node *result = NULL;
  struct node **tail = &result;
  while (poly1 != NULL && poly2 != NULL)
  {
    if (poly1->exp == poly2->exp)
    {
      insertTerm(tail, poly1->coeff + poly2->coeff, poly1->exp);

      poly1 = poly1->next;
      poly2 = poly2->next;
    }
    else if (poly1->exp > poly2->exp)
    {
      insertTerm(tail, poly1->coeff, poly1->exp);
      poly1 = poly1->next;
    }
    else
    {
    }
  }
}

  void displayPolynomial(struct node * poly)
  {
    if (poly == NULL)
    {
      printf("0\n");
      return;
    }
    while (poly != NULL)
    {
      printf("%dx^%d", poly->coeff, poly->exp);
    }
  }
  int main()
  {
    struct node *poly1 = NULL;
    struct node *poly2 = NULL;

    insertTerm(&poly1, 53, 2);
    insertTerm(&poly1, 100, 1);
    insertTerm(&poly1, 3432, 0);

    insertTerm(&poly2, -3, 3);
    insertTerm(&poly2, 2, 3);
    insertTerm(&poly2, 3, 1);

    return 0;
  }
