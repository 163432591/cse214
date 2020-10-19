/*
Insert a value “X” (take input X from user) in the array at third (3rd)
index and shift all other value to right.And print the whole array
Name:Rafeul Anam Udoy
Id:163432591
*/
#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},i,X;
    int p= 3;
    int size = 10;

    for(i=0; i<size; i++){

        printf("%d ", array[i]);

    }


    printf("\n");

    printf("Insert a value: ");
    scanf("%d", &X);

    for (i=size-1; i>=p-1; i--){

        array[i] = array[i-1];
    }

    size++;

    array[p]=X;

    for(i=0; i<size; i++){

         printf("%d ", array[i]);
    }


    return 0;
}

