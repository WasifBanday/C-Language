//MULTIPLE CONDITION USING && (and logic gate) AND || (or logic gate);
//Question :- Take positive integer and tell if it is a three digit number or not ?
#include<stdio.h>
#include<conio.h>
int main () {
    int a;
    printf("Enter number :- ");
    scanf("%d",&a);
    if(a>99 && a<999){      // Using AND gate representation = &&
        printf(" yes , its a three digit number ");
    }
    else {
        printf("No , its not a three digit number");
    }
    
}
