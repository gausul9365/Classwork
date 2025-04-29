#include <stdio.h>

int findmin(int arr[], int  n){
  if(n ==1){
    return arr[0];
  }

  int min = findmin(arr, n-1);
  
}




int main(){
  int arr[] = {5,4,33,64,84,35};
  int n = sizeof(arr)/sizeof(arr[0]);

  int min = findmin(arr, n);
  int max = findmax(arr, n);
  printf("%d",min);
  printf("\n");
  printf("%d",max);
}