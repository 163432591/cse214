/*
Define a function to merge two Linked List. Display all the list before and after merging.
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
struct Node* copy_list_recursive(struct Node *copy);
struct Node* merge_list(struct Node *list1, struct Node *list2);

int main()
{
   struct  Node *head = NULL;
   struct Node *list = NULL;
   struct Node *list1 = NULL;

    head = create_list();
    print_list(head);

    list = copy_list_recursive(head);
    print_list(list);

    list1 = merge_list(head, list);
    print_list(list1);
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

    d->data= 40;
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

struct Node* copy_list_recursive(struct Node *copy)
{
    if(copy == NULL)
        return NULL;
   struct Node *temp = (struct Node*) malloc(sizeof (struct Node));
    temp->data = copy->data;
    temp->next = copy_list_recursive(copy->next) ;

    return temp;
}

struct Node* merge_list(struct Node *list1,struct Node *list2)
{
    struct Node *head, *temp;
    head = list1;
    while(list1->next)
    {
        list1 = list1->next;
    }
    list1->next = list2;
    return head;
}
