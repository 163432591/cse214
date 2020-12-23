/*
Define a function to reverse the Linked List.(Don’t use recursion}
Display both List before and after reversing.
Name:Rafeul Anam Udoy
Id:163432591

*/

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node* create_list();
void print_list(struct Node *temp);
struct Node* print_reverse(struct Node *list);

int main()
{
   struct  Node *head = NULL;

    head = create_list();
    print_list(head);

    head = print_reverse(head);
    print_list(head);

    printf("\n");
}
struct Node* create_list()
{
    struct Node *a, *b, *c, *d;

    a = (struct Node *) malloc(sizeof(struct Node));
    b = (struct Node *) malloc(sizeof(struct Node));
    c = (struct Node *) malloc(sizeof(struct Node));
    d = (struct Node *) malloc(sizeof(struct Node));

    a->data = 10;
    a->next = b;

    b->data = 20;
    b->next = c;

    c->data = 30;
    c->next = d;

    d->data = 40;
    d->next = NULL;

    return a;
}

void print_list(struct Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* print_reverse(struct Node *list)
{
   struct Node *first, *current, *temp;
    first = list;
    current = list->next;
    first->next = NULL;

    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }

    return first;
}
