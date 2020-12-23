/*
Define a “Size” function to find the size of the Linked List.
Name:Rafeul Anam Udoy
Id:163432591
*/

#include<stdio.h>
#include<stdlib.h>

 struct Node
{
    int data;
    struct node *next;
};

struct Node* create_list();
void empty_list(struct Node *ptr);
void print_list(struct Node *ptr);

int main()
{
   struct  Node *head = NULL;

    head = create_list();

    printf("%d\n", size(head));

    return 0;
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

int size(struct Node *ptr)
{
    int count = 0;
    while(ptr)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}
