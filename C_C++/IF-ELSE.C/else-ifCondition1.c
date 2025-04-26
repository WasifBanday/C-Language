#include<stdio.h>
#include<conio.h>
int main (){
    int n;
    printf("Enter number :- ");
    scanf("%d",&n);
    if(n==0){
        printf("Whole number\n");
    }
    else if(n%2==0){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
}
