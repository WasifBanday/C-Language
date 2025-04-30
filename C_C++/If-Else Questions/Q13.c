// Given a point (x-y) , WAP to find out if it lies on the x-axis , y-axis , or at the origin ? 
#include<stdio.h>
#include<conio.h>
int main(){
    int x;
    printf("Enter x value:- ");
    scanf("%d",&x);
    int y;
    printf("Enter y value:- ");
    scanf("%d",&y);
    if (x==0 && y==0){
        printf("The point is at origin");
    }
    else if (x==0){
        printf("The point is at y axis");
    }
    else if (y==0){
        printf("The point is at x axis");
    }
    else {
        printf("The point does not lies on any axis ");
    }

    
}