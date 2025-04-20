//Question = Take two integers input , a and b : a > b, and find the remainder when a is divided by b ?
#include<stdio.h>
#include<conio.h>
int main()
{
    int a , b;                            // a > b
    printf("Enter the 1st number :");
    scanf("%d",&a);
    printf("Enter the 2nd number :");
    scanf("%d",&b);
    int q=a/b;
    int r = a-(b*q);                      
    printf("The remainder is = %d",r);    // [a=divident , b=divisor, q=quotient , r=remainder]
}                                         // formula for findind remainder = [divisor * quotient + remainder = divident]
                                          // for findind remainder we have to change the formula accordingly i;e}}                   
                                          // i;e [remainder = divident - divisor * quotient]
                                          // [remainder = divident - divisor * quotient]