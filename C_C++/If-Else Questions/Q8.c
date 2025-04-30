// Question:- Take 3 numbers input and tell if they can be sides of a triangle
#include<stdio.h>
#include<conio.h>
int main (){
    int a,b,c;
    printf("Enter 1st side :- ");
    scanf("%d",&a);
    printf("Enter 2nd side :- ");
    scanf("%d",&b);
    printf("Enter 3rd side :- ");
    scanf("%d",&c);
    if((a+b>c)&&(b+c>a)&&(c+a>b)){
        printf("Valid triangle");
    }
    else {
        printf("Invalid triangle");
    }
}