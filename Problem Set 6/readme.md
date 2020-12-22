
# Description of solved Program:




**Create Linked List**




struct node

{
    int value;
    struct node *next;
};





**Declare Linked List**



    struct node a, b, c;
    struct node *head=NULL;
    
    
    
    
 
 
**Initialize Linked List**





   a.data = 10;
   
   
   
   
   
   

**Access Linked List**







   head = &a;
   
   
   
   

**Traverse Linked List**




   a.data = 10;
   a.next = &b;
   
   
   
   
   
   
**Display  Linked List**








   a.data = 10;
   a.next = &b;
   printf("%d \t %d \t %d\n", &a, a.data, a.next);
   
   
   
   
   
   
   
 **Dynamic Memory Allocation** 
 
 
 
 
 
  head = (struct Node *)malloc(sizeof(struct Node));
  
  
  
  
  second =(struct Node *)malloc(sizeof(struct Node));
  
  
  
  
  third = (struct Node *)malloc(sizeof(struct Node));
  
  
  
  
  
  
  
   **Check Empty List** 
   
   
   
   
   if(ptr==NULL)
    {
        printf("Empty List\n");
        return;
    }
  
  
   
   
   
