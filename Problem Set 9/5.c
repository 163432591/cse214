/*  Implement an “Insert Before” function to insert an element before a node with value ‘key’
    of the Linked List. Take input ‘key’ and new node value from user. (Check index out of range) */

#include<stdio.h>
#include<stdlib.h>

 struct Node
{
    int data;
    struct Node *next;
};

struct Node* create_list();
void print_list(struct Node *temp);
struct Node* insert_before(struct Node *temp, int key, int data);

int main()
{
    int key;
    struct Node *head = NULL;

    head = create_list();
    print_list(head);

    scanf("%d",&key);

    head = insert_before(head, key, 50);
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

void print_list(struct Node *temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct Node* insert_before(struct Node *temp, int key, int data)
{
    struct Node *prev, *head = temp;
    int i = 0;
    int j = 0;
    while(temp)
    {
        if(temp->data == key)
        {
            if(temp == head)
            {
                struct Node *new_node = (struct Node*) malloc(sizeof(struct Node*)) ;
                new_node->data = data;
                new_node->next = temp;
                i++;
                return new_node;
            }
            else
            {
                struct Node *new_node = (struct Node*) malloc(sizeof(struct Node*));
                new_node->data = data;
                new_node->next = temp;
                prev->next = new_node;
                j++;
                return head;
            }
        }
        prev = temp;
        temp = temp->next;
    }
    if(i<1 || i>4 || j<1 || j>4)
    {
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    return head;
}
