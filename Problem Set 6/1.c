/*
Problem No 1:Define a Structure for Linked List Node, Declare three variable,
Assign value and next address in those variable. Print the variable address,
value and next variable address. (Don’t use any Function, ‘typedef’ keyword
and Dynamic Memory Allocation (DMA)).

Name:Rafeul Anam Udoy
Id:163432591
*/



#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node a, b, c;
    struct node *head=NULL;

    head = &a;

    a.data = 10;
    a.next = &b;
    printf("%d \t %d \t %d\n", &a, a.data, a.next);

    b.data = 20;
    b.next = &c;
    printf("%d \t %d \t %d\n", &b, b.data, b.next);

    c.data = 30;
    c.next = NULL;
    printf("%d \t %d \t %d\n", &c, c.data, c.next);

    return 0;
}
