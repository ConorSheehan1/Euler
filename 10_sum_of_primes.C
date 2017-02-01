#include <stdio.h>#include <stdlib.h>typedef struct Node{	int val;	struct Node* next;};struct Node* top;int append(int value){	Node* newNode = (Node*)malloc(sizeof(struct Node));	newNode->val = value;		// if list is empty	if(top == NULL){		top = newNode;		return 1;	}		Node* current = top;	while(true){		if(current->next == NULL){			current->next = newNode;			break;		}		current = current->next;	}	return 1;}int sum_list(){	int total = 0;	struct Node* current = top;	while(current != NULL){		total += current->val;		current = current->next;	}	return total;}int is_prime(int value){	struct Node* current = top;	while(current != NULL){		if(value % current->val == 0){			return 0;		}		current = current->next;	}		return 1;}void print_list(){
	struct Node* current = top;
	while(current != NULL){
		printf("%d\n", current->val);
		current = current -> next;
	}
	printf("\n");
}int main(){	int start = 2, max = 2000000;		/*append(10);	append(20);	print_list();*/
		// start with 2 as first prime	append(start);
	while (start < max){
		if(is_prime(start)==1){			append(start);		}
		start++;
	}	//print_list();	printf("%d", sum_list());}