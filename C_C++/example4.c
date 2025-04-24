//Question :- Take float input and print the fractional part of the real number 
#include<stdio.h>
#include<conio.h>
int main()
{
    float x ;     
    printf("Enter the value of x 'in float' :- ");       
    scanf("%f",&x);                                
    int y = x;                  
    printf("highest integer value of float x is :- %d\n",y);          
    float z = x-y;              
    printf("Fractional part of the real number is :- %f",z);
    return 0;

}