/*
Update K th (take input K from user) index with the value “X” (take input X from user). And print the whole array.
Name:Rafeul Anam Udoy
Id:163432591
*/

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, K, X;
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ", array[i]);

    printf("\n");


    printf("enter position: ");
    scanf("%d", &K);

    printf("insert your value: ");
    scanf("%d", &X);


     array[K-1]=X;


    for(i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}

