/*
Problem no 2: Insert a value “X” (take input X from user) in the array at the end of currently stored elements
Name:Rafeul Anam Udoy
Id:163432591
*/

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},i,X;
    int size = 10;

    for(i=0; i<size; i++){

        printf("%d ",array[i]);
   }

    printf("\n");
    printf("Insert a value: ");
    scanf("%d", &X);

    array[size] = X;

    size++;

    for(i=0; i<size; i++){

         printf("%d ", array[i]);
    }


    return 0;
}
