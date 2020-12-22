/*
Problem No 2:Define a function to print single node (Address, Value, and Next Address)
of the Linked List and do the same as problem 1. (Use ‘typedef’ keyword,Don’t use DMA).
Name:Rafeul Anam Udoy
Id:163432591
*/

#include<stdio.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;
int main()
{
    Node a, b, c;
    Node *head = NULL;

    head = &a;

    a.data = 10;
    a.next = &b;
    display(&a);

    b.data = 20;
    b.next = &c;
    display(&b);

    c.data = 30;
    c.next = NULL;
    display(&c);

    return 0;
}

void display(Node *ptr)
{
    printf("%d \t %d \t %d\n", ptr, ptr->data, ptr->next);
}

