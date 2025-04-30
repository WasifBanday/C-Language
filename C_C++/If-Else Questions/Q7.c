// Question :- Take three positive integers input and print the greatest of them ?
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    printf("Enter 1st numbers :- ");
    scanf("%d",&a);
    printf("Enter 2nd numbers :- ");
    scanf("%d",&b);
    printf("Enter 3rd numbers :- ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf ("A that is %d is greatest",a);
    }
    if(b>a && b>c){
        printf("b that is %d is greatest",b);
    }
    else{
        printf("C that is %d is greatest",c);
    }
}