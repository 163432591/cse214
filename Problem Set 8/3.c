/*
Implement a “Delete Value” function to delete a value (key) from the Linked List.
Take input the delete ‘key’ from user. (Check Underflow and Not Found).
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
struct Node* delete_value(struct Node *ptr, int key);

int main()
{
    int key;
    struct  Node *head = NULL;

    scanf("%d",&key);

    head = create_list();
    print_list(head);

    head = delete_value(head, key);
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

void print_list(struct Node *ptr){
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct Node* delete_value(struct Node *ptr, int key)
{
    if (ptr)
    {
        struct Node *head = ptr, *prev;
        while(ptr)
        {
            if(ptr->data == key)
            {
                if(head == ptr)
                {
                    head = ptr->next;
                    free(ptr);
                    return head;
                }
                else
                {
                    prev->next = ptr->next;
                    free(ptr) ;
                    return head;
                }
            }
            prev = ptr;
            ptr = ptr->next;
        }
        printf("Not Found\n");
        return head;
    }
    else
        printf("Underflow Linked List\n");
    return ptr;
}
