//Question :- Convert numbers into their absolute value?
#include<stdio.h>
#include<conio.h>
int main ()
{
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    if(n<0){           // if 'n' is negative 
        n = n* (-1);
    }
    printf("The Absolute Value is :- %d ",n );
}