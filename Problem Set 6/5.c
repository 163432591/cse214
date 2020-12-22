/*
Define a function to display the complete Linked List with a recursive
function using problem 4.
Name:Rafeul Anam Udoy
Id:163432591
*/

#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;



    head = (struct Node *)malloc(sizeof(struct Node));
    second =(struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));



    head->data = 7;
    head->next = second;


    second->data = 11;
    second->next = third;


    third->data = 41;
    third->next = NULL;

    display(head);
    return 0;
}
void display(struct Node *ptr)
{
    if(ptr==NULL)
    {
        printf("Empty List\n");
        return;
    }

    else
    {
        printf("%d ",ptr->data);
        if(ptr->next==NULL)
        {
            return;
        }
        display(ptr->next);
    }

}
