//Question : Find the area of circle ?
#include<stdio.h>
#include<conio.h>
int main()
{
    int r;
    printf("Enter radius of circle : ");
    scanf("%d",&r);                       //Have to write %d because radius will be given in integers 
    float pi=3.14;
    float c=(pi*r*r);
    printf("Area Of Circle = %f",c);
    return 0;
}
