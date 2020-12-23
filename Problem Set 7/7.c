/*
Define a “Search” function to find a ‘key’ (take input ‘key’ from user).Print “Found”
if the search ‘key’ is found in the Linked List otherwise print “Not Found”
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
void print_list(struct Node *ptr);

int main()
{
    int key;
    struct Node *head = NULL;

    scanf("%d",&key);

    head = create_list();
    print_list(head);

    if(search(head,key)==0)
        printf("%d: Not Found",key);
    else
        printf("%d: Found",key);

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

void print_list(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int search(struct Node *ptr, int key)
{
    if(ptr)
    {
        while(ptr)
        {
            if(key == ptr->data)
            {
                return 1;
            }
            ptr = ptr->next;
        }
        return 0;
    }
    return 0;
}

