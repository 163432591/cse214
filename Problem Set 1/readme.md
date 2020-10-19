
## Description of solved Program:
 ```
Here for problem 1,2,3 i first declare an integer array length of one hunderd.i dont initialize the array.i check overflow for each program.i don,t use any function and pointer.just use simple loop for solving problem.
.
```
## Check overflow

if(n>100)
    {
        printf("Overflow");
    }
    
## Take values from user into an array until end of file

 while(scanf("%d",&array[i]) != EOF)
    {
        i++;
        if(i+1>100)
        {
            printf("Overflow");
            break;
        }
    }
    
    
##  Take values from user into an array until user input is 0(Zero)


while(scanf("%d",&array[i]) != EOF)
    {
        if(0 == array[i])
        {
            break;
        }

        if(i>100)
        {
            printf("Overflow");
            break;
        }
        else
        {
         i++;
        }
    }

```
here  for problem 4,5,6,7 i i  first declare an integer array length of one hunderd and initialize the array with 10 values.i don,t use any function and pointer.just use simple loop for solving problem.
.
```
## To print array in new line

for(i=0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
    
## To Print entire array each element separated by space

for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    
## To Print entire array each element separated by comma

for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);

        if(i<9){

             printf(",");
        }
    }
    
 ## To Print the array elements in reverse order
 
 for(i=9;i>=0;i--)
    {
        printf("%d ",array[i]);


    }
 
 
