#include <stdio.h>

int main()
{
  int arr[] = {15,25,35,45,55};
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int i=0; i<n; i++){
    printf("%d ",arr[i]);
  }
    
  arr[0] = 33;
  
  printf("\n---updated array is---\n");
    
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
      
  }


  return 0;
}