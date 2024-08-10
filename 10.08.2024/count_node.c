#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void count(struct node *head) {
    int Count=0;
    if (head==NULL) {
        printf("The linked list is empty!!!");
    }
    struct node *ptr=NULL;
    ptr = head;
    while (ptr != NULL){
        Count++;
        ptr = ptr->next;
    }
    printf("The count : %d\n",Count);
}


int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = NULL;
    
    struct node *current = (struct node *) malloc(sizeof(struct node));
    current->data = 20;
    current->next = NULL;

    head->next = current;

    current = (struct node *) malloc(sizeof(struct node));
    current->data = 30;
    current->next = NULL;

    head->next->next =current;

    count(head);
    
}
