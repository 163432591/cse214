/*
Update fifth (5th) index with another value. And print the whole array
Name:Rafeul Anam Udoy
Id:163432591
*/

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},i,value;
    int position = 5;
    int size = 10;


    for(i=0; i<size; i++){
         printf("%d ", array[i]);
    }


    printf("\n");

    printf("enter a value: ");
    scanf("%d",&value);


    array[position] =value;

    for(i=0; i<size; i++){

         printf("%d ", array[i]);
    }


     return 0;


}
