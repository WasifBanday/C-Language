// Question of hierarchy order : what will be the output 
//2*3/4+4+8-2+5/8

#include<stdio.h>
#include<conio.h>
int main ()
{
    int i = 2*3/4+4/4+8-2+5/8;   // In programming it does not follow BODMAS rule of mathematics exactly,but
    printf("output :- %d",i);    //in multiplication and division it happens simultaneously in order from left to right no preference to  a single 1.
    return 0;
}