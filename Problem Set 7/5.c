/*
Define a “Back” function to display the last element of the Linked List.
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
    printf("%d\n", back(head));

    return 0;
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

int back(struct Node *ptr){
    if(ptr!=NULL){
        while(ptr->next){
            ptr=ptr->next;
        }
        return ptr->data;
    }
}

