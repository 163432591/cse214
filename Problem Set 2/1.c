/*
Insert any value at tenth (10th) index of the array.And print the whole array.
Name:Rafeul Anam Udoy
Id:163432591
*/

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},i;
    int size=10;
    int value=50;


    for(i=0; i<size; i++)
        printf("%d ",array[i]);

    printf("\n");

    array[10] = value;

    for(i=0; i<=size; i++)
        printf("%d ",array[i]);

    return 0;
}

