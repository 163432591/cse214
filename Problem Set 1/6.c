/*
Problem No 6:Print entire array each element separated by comma.
Name:Rafeul Anam Udoy
Id:163432591
*/
#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10},n=10,i;
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);

        if(i<9){

             printf(",");
        }
    }
    return 0;
}

