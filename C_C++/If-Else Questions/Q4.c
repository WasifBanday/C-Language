// WAP to find area of reactangle is greater then its parimeter?
#include<stdio.h>
#include<conio.h>
int main ()
{
    int l;
    printf("Enter Length :- ");
    scanf("%d",&l);
    int b;
    printf("Enter Breadth:- ");
    scanf("%d",&b);
    int area = 2*l*b;
    int perimeter = 2*(l+b);
    if(area>perimeter){
        printf("area is greater");
    }
    else if(area == perimeter){
        printf("area is equal to perimeter");
    }
    else{
        printf("perimeter is greater");
    }

    return 0;
}