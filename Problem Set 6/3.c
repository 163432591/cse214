/*
Problem No 3: Define a function to display (only value for each node) the
complete Linked List and do the same as problem 1. (Don’t use DMA).
Name:Rafeul Anam Udoy
Id:163432591
*/


#include<stdio.h>

struct Node
{
    int data;
    struct node *next;
};



int main()
{
    struct Node p, q, r;
    struct Node  *head = NULL;

    head = &p;

    p.data = 10;
    p.next = &q;

    q.data = 20;
    q.next = &r;

    r.data = 30;
    r.next = NULL;

    display(head);

    return 0;
}

void display(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr = ptr->next;
    }
}
