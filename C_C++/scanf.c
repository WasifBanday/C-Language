#include<stdio.h>
#include<conio.h>
int main ()
{
    float principal,rate,time,si;

    printf("Enter Principal :");                       
    scanf("%f",&principal);                             //scanf is used for taking input 

    printf("Enter Rate :");
    scanf("%f",&rate);

    printf("Enter Time :");
    scanf("%f",&time);

    si=(principal*rate*time)/100;                       //formula for interest = PRT/100
    printf("YOUR SIMPLE INTEREST IS : %f",si);          //printf is used to print output
    return 0;
}