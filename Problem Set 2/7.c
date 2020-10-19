/*
Problem no 7: Search a value “X” (take input X from user) in the array and print “Found” if X found in the array otherwise print “Not Found”
Name:Rafeul Anam Udoy
Id:163432591
*/

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X;
    int size = 10;
    int j = 0;

    for(i=0; i<size; i++)
        printf("%d ", array[i]);

    printf("\n");
    printf("enter your value: ");
    scanf("%d",&X);

    for (i=0; i<size; i++)
    {
        if(array[i]==X)
            j++;
    }

    if(j==1)
        printf("X Found");
    else
        printf("Not Found");

    return 0;
}

