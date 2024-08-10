#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

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

    printf("%d --> %d -->\n",head->data,current->data);
    printf("%p-->%p-->%p",head->next,head->next->next,current->next);


}
