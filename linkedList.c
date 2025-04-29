#include<stdio.h>


void insert_at_end(struct node**head_ref, int new_data){

  struct node* new_node = (struct node*)malloc(sizeof(struct node));

  new_node->data = new_data;
  new_node->next = NULL;
  
  IF(*head_ref == NULL){
    head_ref = new_node;
    return;
  }


  struct node* temp = *head_ref;
  while(temp->next != NULL){
    temp = temp->next;
  }
temp->next = new_node;
 

insertion_at_begin(struct node** head_ref){

   

  
}


int main(){
  struct Node*
}



  
}