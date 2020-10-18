/*
Problem No 7:Print the array elements in reverse order.Each element should be separated by space.
Name:Rafeul Anam Udoy
Id:163432591

*/

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10},i;
    for(i=9;i>=0;i--)
    {
        printf("%d ",array[i]);


    }
    return 0;
}
