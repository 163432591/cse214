/*
Define a function to reverse the Linked List using a recursive function.
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
void print_list_reverse(struct Node *temp);

int main()
{
   struct  Node *head = NULL;

    head = create_list();
    print_list(head);

    print_list_reverse(head);
    printf("\n");
}
struct Node* create_list()
{
   struct  Node *a, *b, *c, *d;

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

void print_list_reverse(struct Node *temp){
    if(temp==NULL){
        return;
    }
    print_list_reverse(temp->next);
    printf("%d ",temp->data);
}
