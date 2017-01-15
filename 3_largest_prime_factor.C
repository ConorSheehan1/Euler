#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

void push(node_t * head, int val) {
    node_t * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = (struct node *)malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

int pop(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

int isPrime(int n){
	for(int i = 2; i < sqrt(n); i++){
		if(n%i == 0){
			/* return 0 for false (booleans aren't primitive in c)*/
			return 0;
		}
	}
	/* return 1 for true*/
	return 1;
}

int main(void) {
    node_t * test_list = (struct node *)malloc(sizeof(node_t));
	double number = 600851475143;
	double limit = double(sqrt(number/2))+1;
	printf("limit = %f\n", limit);
	
	/* add divisors to linked list*/
	for(double i = 2; i < limit; i++){
		/*printf("%f\n", i);*/
		
		/*printf("%d\n", fmod(number, i)==0);*/
		/*printf(fmod(number, i)==0 ? "true": "false");*/
		
		if(fmod(number, i)==0){
			push(test_list, i);
		}		
	}
	
	double largestPrime;
	/* cycle through linked list until largest prime is found
	   values in linked list are already sorted smallest to largest
	   so just keep overwriting largestPrime if value is a prime*/	
	node_t * current = test_list;

    while (current != NULL) {
		int val = current->val;
		if(isPrime(val)==1){
			largestPrime = val;
		}
        current = current->next;
    }
	
	printf("largest prime factor = %f\n", largestPrime);
	

    return EXIT_SUCCESS;
}