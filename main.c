#include <stdio.h>
#include <stdlib.h>
 typedef struct linked_list {
   int data ;
   int *next;
    }list;

void print_list (list *head){
while(head->next !=NULL){

  printf("linked_list_data:%d\n",head->data);
head=head->next;
}

}



int main(void) {
list *head =NULL;
list * second= NULL;
list * third =NULL;

head = (list* )malloc(sizeof(list));
second =(list*)malloc(sizeof(list));
third =(list *)malloc(sizeof(list));

head->data=0;
head->next=second;

second->data =5;
second->next=third;

third->data=10;
third->next=NULL;

print_list(head);
  return 0;
}
