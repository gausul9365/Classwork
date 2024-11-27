#include <stdio.h>
int main()
{
  float ages[] = {20,33,18,35,48,26,87,70};

float avg, sum=0;
int i;
int length = sizeof(ages) / sizeof(ages[0]);

for (int i = 0; i < length; i++)
{
  sum += ages[i];
}

avg = sum / length;
printf("The average age is: %.2f", avg);
  



return 0;
}