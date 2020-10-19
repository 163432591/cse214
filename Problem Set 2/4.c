/*
Insert a value “X” (take input X from user) in the array at K th (take input K from user)
index and shift all other value to right. And print the whole array
Name:Rafeul Anam Udoy
Id:163432591
*/

#include <stdio.h>
int main()
{
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X, K;
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\n");

    printf("enter your position");
    scanf("%d", &K);
    printf("enter your value: ");
    scanf("%d", &X);

    for (i=size-1; i>=K-1; i--){

         a[i] = a[i - 1];
    }

       size++;

    a[K - 1] = X;

    for(i=0; i<size; i++){

        printf("%d ", a[i]);

    }


    return 0;
}
