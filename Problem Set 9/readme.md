
# Description of solved Program:


**Insert Front In Linked List**


    struct Node* insert_front(struct Node *temp, int key)
{

    struct Node *new_head;
    new_head = (struct Node*) malloc(sizeof(struct Node) );
    new_head->data = key;
    new_head->next = temp;
    return new_head;
}

**Insert Back In Linked List**


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

**Insert At In Linked List**



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

**Insert After In Linked List**

    struct Node* insert_after(struct Node *temp, int key, int data)
{

    struct Node *head = temp;
    int i = 0;
    while(temp)
    {
        if(temp->data == key)
        {
            struct Node *new_node = (struct Node*) malloc(sizeof (struct Node) );
            new_node->data = data;
            new_node->next = temp->next;
            temp->next = new_node;
            i++;
            return head;
        }
        temp = temp->next;
    }
    if(i<1 || i>4)
    {
        printf("Index out of range\n");
        printf("Element Not Found\n");
    }
    return head;
}
**Insert Before In Linked List**

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

