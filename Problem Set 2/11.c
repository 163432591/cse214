
/*
Delete a value from after Kth index (take input K from user) from the array shift all other value to left.
Name:Rafeul Anam Udoy
Id:163432591
*/
#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},i,K;

    int size = 10;
    int tag = 0;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\n");

    printf("enter your index no: ");
    scanf("%d", &K);

    for (i=K; i<=size; i++)
        a[i+1] = a[i+2];
    size--;

    printf("After deletion the resultant array are: ");

    for (i=0; i<size; i++)
        printf("%d ",a[i]);

    return 0;
}

