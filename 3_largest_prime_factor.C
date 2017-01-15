#include <stdio.h>
#include <stdlib.h>

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


int main(void) {
    node_t * test_list = (struct node *)malloc(sizeof(node_t));

    test_list->val = 1;
    test_list->next = (struct node *)malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (struct node *)malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (struct node *)malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = NULL;

    print_list(test_list);

    return EXIT_SUCCESS;
}