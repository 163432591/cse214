/*
Delete a value “X” (take input X from user) from the array shift all other value to left. If “X” is not present in
the given array print Element Not Found. Only delete the first occurrence of the value.
Name:Rafeul Anam Udoy
Id:163432591
*/


#include<stdio.h>
int main ()
{
    int array[100]= {1,2,3,4,5,6,7,8,9,10},i, j, X;
    int tag=0;
    int size=10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");
    printf("enter your value: ");
    scanf("%d",&X);

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

    size--;

    if(tag!=1)
    {
        printf("Not Found");
        printf("\n");

        for(i=1;i<=size;i++) {

            array[i-1]=array[i];
        }

         for(i=0; i<size; i++){
            printf("%d ",array[i]);
         }


    }
    else
    {
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
}

