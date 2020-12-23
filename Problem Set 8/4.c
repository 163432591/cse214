/*
Implement a “Delete At” function to delete the nth element of the Linked List. Take input ‘n’ from user.
(Check Underflow and index out of range) (Let, for the first element n = 1)
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
struct Node* delete_at(struct Node *ptr, int pos);

int main()
{
    int n;
    struct Node *head = NULL;

    head = create_list();
    print_list(head);
    scanf("%d",&n);
    head = delete_at(head, n);
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

struct Node* delete_at(struct Node *ptr, int pos)
{
    while(ptr)
    {
        if(pos>4 || pos<1)
        {
            printf("Index out of range");
            return NULL;
        }
        else
        {
            if(pos==1)
            {
                struct Node *new_head = NULL;
                new_head = ptr->next;
                free(ptr);
                return new_head;
            }
            else
            {
                struct  Node *head = ptr;
                struct Node *prev, *next;
                int i=1;
                while(i<pos)
                {
                    prev = ptr;
                    ptr = ptr->next;
                    i++;
                }
                prev->next = ptr->next;
                free(ptr) ;
                return head;
            }
        }
    }
    printf("Underflow Linked List\n");
    return NULL;
}
