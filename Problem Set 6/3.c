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
    struct Node a, b, c;
    struct Node  *head = NULL;

    head = &a;

    a.data = 10;
    a.next = &b;

    b.data = 20;
    b.next = &c;

    c.data = 30;
    c.next = NULL;

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
