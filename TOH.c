
#include <stdio.h>
#include<stdlib.h>


int count =0;
int TOI(int n,char s, char d, char aux ){
  if(n==0){
    return;
  }
  else{
    TOI(n-1, s, aux, d);
    count++;
    printf("Moving disk %d, from %c to %c ", n, s, d);
    printf("\n");

    TOI(n-1, aux, d, s);
  }
}

  int main(){
  int n =3;

  TOI (n, 'S', 'D', 'A' );
  printf("total count = %d", count);

}