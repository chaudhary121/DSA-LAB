#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head ;

void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head=new_node;
        if(head == NULL)
        {
            head = new_node;
            
        }     
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
	
   insert(7);
   insert(2);
   insert(0);
   insert(4);
    insert(4);
   cout<<"The linked list is(At the beggining): ";
   display();
   return 0;
}
