#include <stdio.h>  
#include <stdlib.h>  
 
struct node{  
    int data;  
    struct node *next;  
};      
   

struct node *head, *tail = NULL;  
   
  
void addNode(int data) {   
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
   
    if(head == NULL) {  
         
        head = newNode;  
        tail = newNode;  
    }  
    else {  
          
        tail->next = newNode;  
        tail = newNode;  
    }  
}  
   
 
void display() {  
    //current node will point to head  
    struct node *current = head;  
      
    printf("Nodes of singly linked list: \n");  
    while(current != NULL) {   
        printf("%d ", current->data);  
        current = current->next;  
    }  
    printf("\n");  
}  
      
int main()  
{  
    //add nodes to the list  
    addNode(1);  
    addNode(2);  
    addNode(3);  
    addNode(4);  
      
    
    display();  
   
    return 0;  
}  
