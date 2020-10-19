/*
Delete a value “X” (take input X from user) from the array shift all other value to left. If “X” is not present
in the given array print Element Not Found. Delete all the occurrence of the value. If “X” is not present in
the given array print Element Not Found.  delete all the  occurrence of the value.
Name:Rafeul Anam Udoy
Id:163432591
*/

#include<stdio.h>
int main ()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 4, 7, 8, 9,10};
    int i, j, X;
    int tag=0;
    int size=10;

    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

    printf(" enter your value: ");
    scanf("%d",&X);

    for( i=0; i<=size; i++)
    {
        if(X==array[i])
        {
            for(j=i; j<=size; j++)
            {
                array[j] = array[j+1];
            }
            size--;
            tag++;
            i--;
        }
    }

    if(tag!=1)
    {
        printf("Not Found");
    }
    else
    {
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
}
