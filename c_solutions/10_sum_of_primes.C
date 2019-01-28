#include <stdio.h>
#include <stdlib.h>

struct Node{
    int val;
    struct Node* next;
};
struct Node* top;

void append(int value){
    Node* newNode = (Node*)malloc(sizeof(struct Node));
    newNode->val = value;
    
    Node* current = top;
    while(true){
        if(current->next == NULL){
            current->next = newNode;
            break;
        }
        current = current->next;
    }
}

int is_prime(int value){
    struct Node* current = top;
    while(current != NULL){
        if(value % current->val == 0){
            return 0;
        }
        current = current->next;
    }
    
    return 1;

}

void print_list(){
    struct Node* current = top;
    while(current != NULL){
        printf("%d\n", current->val);
        current = current -> next;
    }
    printf("\n");
}

int main(){
    int start = 2, max = 2000000; 
    long long int total=2;
    
    /*append(10);
    append(20);
    print_list();*/
    
    // start with 2 as first prime
    top = (Node*)malloc(sizeof(struct Node));
    top->val = start;
    
    while (start < max){
        if(is_prime(start)==1){
            append(start);
            total+=start;
        }
        start++;
    }
    //print_list();
    printf("%lld", total);
    
    //1179908154 wrong

}
