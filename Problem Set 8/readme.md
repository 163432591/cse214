
# Description of solved Program:





**Delete Front In Linked List And Check Under Flow* **


struct Node* delete_front(struct Node *ptr)
{
    if(ptr){
    
    
        struct Node *new_head = NULL;
        
        
    new_head = ptr->next;
    
    
    free(ptr);
    
    
    return new_head;
    
    }
    else
    
    
        printf("Underflow Linked List");
        
        
    return ptr;
}





**Delete Back  In Linked List And Check Under Flow**



truct Node* delete_back(struct Node *ptr)
{
    struct Node *head = ptr, *last;
    if(ptr)
    {
        if (head->next!=NULL)
        {
            while(ptr->next)
            {
                last = ptr;
                ptr = ptr->next;
            }
            free(ptr);
            last->next = NULL;
        }
        else
        {
            free(ptr) ;
            head = NULL;
        }
        return head;
    }
    else
        printf("Underflow Linked List");
    return head;
    
    
    
    
    
    
   **Delete ValueAnd Check Under Flow **
   
   
   
   struct Node* delete_value(struct Node *ptr, int key)
{
    if (ptr)
    {
        struct Node *head = ptr, *prev;
        while(ptr)
        {
            if(ptr->data == key)
            {
                if(head == ptr)
                {
                    head = ptr->next;
                    free(ptr);
                    return head;
                }
                else
                {
                    prev->next = ptr->next;
                    free(ptr) ;
                    return head;
                }
            }
            prev = ptr;
            ptr = ptr->next;
        }
        printf("Not Found\n");
        return head;
    }
    else
        printf("Underflow Linked List\n");
    return ptr;
}





**Delete The Nth Element In Linked List **



struct Node* delete_at(struct Node *ptr, int pos)
{
    while(ptr)
    {
        if(pos>4 || pos<1)
        {
            printf("Index out of range");
            return NULL;
        }
        else
        {
            if(pos==1)
            {
                struct Node *new_head = NULL;
                new_head = ptr->next;
                free(ptr);
                return new_head;
            }
            else
            {
                struct  Node *head = ptr;
                struct Node *prev, *next;
                int i=1;
                while(i<pos)
                {
                    prev = ptr;
                    ptr = ptr->next;
                    i++;
                }
                prev->next = ptr->next;
                free(ptr) ;
                return head;
            }
        }
    }
    printf("Underflow Linked List\n");
    return NULL;
}



**Delete All Value In Linked List **
 
 
 
 struct Node* clear(struct Node *ptr)
{
    struct Node *to_delete;
    while(ptr)
        {
            to_delete = ptr;
            ptr = ptr->next;
            free(to_delete);
        }
    return NULL;
}


