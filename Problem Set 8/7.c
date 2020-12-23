/*
Implement a “Clear” function to delete the all the element of the Linked List.
Name:Rafeul Anam Udoy
Id:1634325910
*/

#include<stdio.h>
#include<stdlib.h>

 struct Node
{
    int data;
    struct Node *next;
};

struct Node* create_list();
void print_list(struct Node *ptr);
struct Node* clear(struct Node *ptr);

int main()
{
   struct Node *head = NULL;

    head = create_list();
    print_list(head);

    if(clear(head)==NULL)
        printf("Clear Linked List\n");

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

void print_list(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct Node* clear(struct Node *ptr)
{
    struct Node *to_delete;
    while(ptr)
        {
            to_delete = ptr;
            ptr = ptr->next;
            free(to_delete);
        }
    return NULL;
}
