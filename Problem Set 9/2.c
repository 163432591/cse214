/*
Implement an “Insert Back” function to insert an element at the end (back) of the Linked List.
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
struct Node* insert_back(struct Node *temp, int key);

int main()
{
    struct Node *head = NULL;

    head = create_list();
    print_list(head);
    head = insert_back(head, 50);
    print_list(head);

    return 0;
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

void print_list(struct Node *temp){
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* insert_back(struct Node *temp, int key)
{
    if (temp==NULL)
    {
        struct Node *new_head;
        new_head = (struct Node*) malloc(sizeof (struct Node) );
        new_head->data = key;
        new_head->next = NULL;
        return new_head;
    }
    struct Node *head = temp, *new_node;
    while(temp->next)
        temp = temp->next;

    new_node = (struct Node*) malloc(sizeof (struct Node) );
    new_node->data = key;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}
