#include <stdio.h>
int main()
{
  int marks[10], i, n , sum = 0;

  double avg;
  printf("Enter number of element\n");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i)
  {
    printf("Enter number %d:\n", i+1);
    scanf("%d", &marks[i]);

    sum += marks[i];  
  }

  avg = (double) sum/n;

  printf("Average=%.2lf", avg);
    
  return 0;
}