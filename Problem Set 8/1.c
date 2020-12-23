/*
Implement a �Delete Back� function to delete the last (back) element of the Linked List.(Check Underflow).
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
void print_list(struct Node *ptr);
struct Node* delete_back(struct Node *ptr);

int main()
{
    struct Node *head = NULL;

    head = create_list();
    print_list(head);

    head = delete_back(head);
    print_list(head);

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

    d->data= 40;
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

struct Node* delete_back(struct Node *ptr)
{
    struct Node *head = ptr, *last;
    if(ptr)
    {
        if (head->next!=NULL)
        {
            while(ptr->next)
            {
                last = ptr;
                ptr = ptr->next;
            }
            free(ptr);
            last->next = NULL;
        }
        else
        {
            free(ptr) ;
            head = NULL;
        }
        return head;
    }
    else
        printf("Underflow Linked List");
    return head;
}

