/*
Problem no 8: Search a value “X” (take input X from user) in the array and print the
index if X found in the array otherwise print -1.
Name:Rafeul Anam Udoy
Id:163432591

 */

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X;
    int size = 10;
    int tag = 0;

    for(i=0; i<size; i++)
        printf("%d ", array[i]);

    printf("\n");

    printf("enter your value: ");
    scanf("%d", &X);

    for (i=0; i<size; i++)
    {
        if(array[i]==X){
            printf("Index %d",i);
            tag++;
        }
    }

    if(tag!=1)
        printf("-1");

    return 0;
}



