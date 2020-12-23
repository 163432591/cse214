/*
Implement an “Insert At” function to insert an element at the nth index of the Linked List. Take input
‘n’ and value from user. (Check index out of range) (Let, for the first element n = 1) */

#include<stdio.h>
#include<stdlib.h>

 struct Node
{
    int data;
    struct node *next;
};

struct Node* create_list();
void print_list(struct Node *temp);
struct Node* insert_at(struct Node *temp, int pos, int value);

int main()
{
    int x, y;
    struct Node *head = NULL;

    head = create_list();
    print_list(head);
    scanf("%d %d", &x, &y);
    head = insert_at(head, x, y);
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


struct Node* insert_at(struct Node *temp, int pos, int data)
{
    struct Node *head = temp, *prev, *new_node;
    int i = 2;
    if(pos<1 || pos>4)
    {
        printf("Index out of range\n");
        return temp;
    }
    if(pos == 1)
    {
        new_node = (struct Node*) malloc(sizeof(struct Node) );
        new_node->data = data;
        new_node->next = temp;
        return new_node;
        }
    while(temp)
    {
        prev = temp;
        if(i == pos)
        {
            new_node = (struct Node*) malloc(sizeof(struct Node)) ;
            new_node->data = data;
            new_node->next = temp->next;
            prev->next = new_node;
            return head;
        }
        i++;
        temp = temp->next;
    }
    printf( "Invalid Index\n");
    return head;
}
