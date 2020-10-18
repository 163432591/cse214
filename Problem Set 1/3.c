
/*
Problem no 3:Scan values from user into an array until user input is 0(Zero).
Name:Rafeul Anam Udoy
Id:163432591
*/

#include<stdio.h>
int main()
{
    int array[100];
    int i = 0;
    while(scanf("%d",&array[i]) != EOF)
    {
        if(0 == array[i])
        {
            break;
        }

        if(i>100)
        {
            printf("Overflow");
            break;
        }
        else
        {
         i++;
        }
    }
    return 0;
}
