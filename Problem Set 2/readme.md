
# Description of solved Program:
```
here   i  first declare an integer array length of one hunderd and initialize the array with 10 values.i don,t use any function and pointer.just use simple loop for solving problem.
.
```
## Insert any value at tenth (10th) index:



for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

    array[10] = value;


## Insert a value  in the array at the end of currently stored elements:



scanf("%d", &X);

    array[size] = X;

    size++;
    
    
    
## Update  index value with another Value:

 array[index] =value;
 
 
## Update K th  index with the value “X” :
 
 array[K]=X;
 
## Search a value “X”  in the array:
   
   for (i=0; i<size; i++)
    {
        if(array[i]==X)
            j++;
    }
    
    if(j==1) //initally we give j=0
        printf("X Found");
        
## Delete a value from Kth index from the array shift all other value to left:




 for (i=K; i<=size; i++)
        a[i] = a[i+1];

    size--;
    
    
## Delete a value from before Kth index  from the array shift all other value to left:



for (i=K; i<=size; i++)
        a[i-1] = a[i];
    size--;
    
    
    
## Delete a value from after Kth index  from the array shift all other value to left:



for (i=K; i<=size; i++)
        a[i+1] = a[i+2];
    size--;
    
    
    
    
## Delete a value “X”   from the array shift all other value to left:




for(i=0; i<size; i++)
    {
        if(array[i]==X)
        {
            for(j=i; j<=size; j++)
            {
                array[j] = array[j+1];
            }
            tag++;
            break;
        }
    }
    
    
    
 
 
 ## Delete a value  before X  from the array shift all other value to left:
 
 
 
 
 or(i=0; i<size; i++)
    {
        if(array[i]==X)
        {
            for(j=i; j<=size; j++)
            {
                array[j-1] = array[j];
            }
            tag++;
            break;
        }
    }




##  Delete a value  after from the array shift all other value to left :



for(i=0; i<size; i++)
    {
        if(array[i]==X)
        {
            for(j=i; j<=size; j++)
            {
                array[j+1] = array[j+2];
            }
            tag++;
            break;
        }
    }
##  Only delete the first occurrence of the value.And also print the array:

for(i=1;i<=size;i++) {

            array[i-1]=array[i];
        }

         for(i=0; i<size; i++){
            printf("%d ",array[i]);
         }
 
