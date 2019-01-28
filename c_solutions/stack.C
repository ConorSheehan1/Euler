#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int val;
    struct Node * next;
};
/* global variable for top of stack */
struct Node* head;


void print_stack(){
    struct Node* current = head;
    while(current != NULL){
        printf("%d\n", current->val);
        current = current -> next;
    }
    printf("\n");
}

void push(int value){
    /* need to cast malloc pointer to node, malloc returns void pointer*/
    struct Node* new_head = (Node*)malloc(sizeof(struct Node));
    /* new_head->val same as (*new_head).val (dereference and assign value) */
    new_head->val = value;
    new_head->next = head;
    head = new_head;
    print_stack();
}

int pop(){
    int temp = head->val;
    head = head->next;
    print_stack();
    return temp;
}


int main(){
    push(10);
    push(100);
    push(20);
    
    pop();    
}
