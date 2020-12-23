/*
Define an “Empty” function to check whether the Linked List is empty or not.
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
void empty_list(struct Node *ptr);
void print_list(struct Node *ptr);

int main()
{
   struct Node *head = NULL;


    head = create_list();
    print_list(head);
    empty_list(head);

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
void empty_list(struct Node *ptr)
{
    if(ptr==NULL)
    {
        printf("Empty List\n");
        return;
    }
}
void print_list(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}


