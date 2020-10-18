
/*
Problem No 1:Scan N (take input N from user) values from user into an array.
Name:Rafeul Anam Udoy
Id:163432591
*/

#include<stdio.h>
int main()
{
    int array[100], n, i;

    scanf("%d",&n);
    if(n>100)
    {
        printf("Overflow");
    }
    else
    {
        for(i = 0; i<n; i++)
        {
            scanf("%d",&array[i]);
        }
    }
    return 0;
}
