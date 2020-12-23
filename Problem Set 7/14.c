/*
Define a function to merge two sorted Linked List into a sorted Linked List. Display all the
list before and after merging. (Consider given two linked list are already sorted).
Name:Rafeul Anam Udoy
Id:163432591
*/

#include<stdio.h>
#include<stdlib.h>

 struct Node
{
    int value;
    struct Node *next;
};

struct Node* create_list1();
struct Node* create_list2();
void print_list(struct Node *temp);
struct Node* merge_list(struct Node *list1, struct Node *list2);

int main()
{
    struct Node *head = NULL;
    struct Node *list = NULL;
    struct Node *list1 = NULL;
    struct  Node *list2 = NULL;

    list1 = create_list1();
    print_list(list1);

    list2 = create_list2();
    print_list(list2);

    list = merge_list(list1, list2);
    print_list(list);

}
struct Node* create_list1()
{
   struct  Node *a, *b, *c, *d;

    a = (struct Node *) malloc(sizeof(struct Node));
    b = (struct Node *) malloc(sizeof(struct Node));
    c = (struct Node *) malloc(sizeof(struct Node));
    d = (struct Node *) malloc(sizeof(struct Node));

    a->value = 10;
    a->next = b;

    b->value = 20;
    b->next = c;

    c->value = 30;
    c->next = d;

    d->value = 40;
    d->next = NULL;

    return a;
}

struct Node* create_list2()
{
   struct  Node *a, *b, *c, *d;

    a = (struct Node *) malloc(sizeof(struct Node));
    b = (struct Node *) malloc(sizeof(struct Node));
    c = (struct Node *) malloc(sizeof(struct Node));
    d = (struct Node *) malloc(sizeof(struct Node));

    a->value = 50;
    a->next = b;

    b->value = 60;
    b->next = c;

    c->value = 70;
    c->next = d;

    d->value = 80;
    d->next = NULL;

    return a;
}

void print_list(struct Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* merge_list(struct Node *list1, struct Node *list2)
{
  struct  Node *head, *temp;
    head = list1;
    while(list1->next)
    {
        list1 = list1->next;
    }
    list1->next = list2;
    return head;
}

