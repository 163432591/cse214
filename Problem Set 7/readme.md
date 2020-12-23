
## Description of solved Program:


**Create Linked List With Create function**



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


**Check Empty List **



void empty_list(struct Node *ptr)
{
    if(ptr==NULL)
    {
        printf("Empty List\n");
        return;
    }
}



**Find The Size of Linked List **




int size(struct Node *ptr)
{
    int count = 0;
    while(ptr)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}





**Display First  Element Of Linked List **


int front(struct Node *ptr){
    if(ptr!=NULL){
        return ptr->data;
    }
}


**Display Last Element Of Linked List **



int back(struct Node *ptr){
    if(ptr!=NULL){
        while(ptr->next){
            ptr=ptr->next;
        }
        return ptr->data;
    }
}




**Search key In Linked List**




int search(struct Node *ptr, int key)
{
    if(ptr)
    {
        while(ptr)
        {
            if(key == ptr->data)
            {
                return 1;
            }
            ptr = ptr->next;
        }
        return 0;
    }
    return 0;
}







**Display Reverse Linked List**



struct Node* print_reverse(struct Node *list)
{
   struct Node *first, *current, *temp;
    first = list;
    current = list->next;
    first->next = NULL;

    while(current)
    {
        temp = current->next;
        current->next = first;
        first = current;
        current = temp;
    }

    return first;
}





**Display Reverse Linked List With Recursive Function**




void print_list_reverse(struct Node *temp){
    if(temp==NULL){
        return;
    }
    print_list_reverse(temp->next);
    printf("%d ",temp->data);
}





**Copy Linked List To Another Linked List**



struct Node* copy_list(struct Node *temp)
{
    struct Node *head2;
    struct Node *temp2;

    temp2 = (struct Node*) malloc(sizeof (struct Node));

    temp2->data = temp->data;
    temp2->next = temp->next;

    head2 = temp2;
    temp = temp->next;
    while(temp)
    {
        temp2 = (struct Node*) malloc(sizeof (struct Node) ) ;
        temp2->data = temp->data;
        temp2->next = temp->next;
        temp = temp->next;
    }
    return head2;
}







**Copy Linked List To Another Linked List With Recursive Function**




struct Node* copy_list_recursive(struct Node *copy)
{
    if(copy == NULL)
        return NULL;
   struct Node *temp = (struct Node*) malloc(sizeof (struct Node));
    temp->data = copy->data;
    temp->next = copy_list_recursive(copy->next) ;

    return temp;
}




**Merged Two Linked List**



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




**Merged Two Shorted  Linked List**



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












