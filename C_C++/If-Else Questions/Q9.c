//   NESTED IF-ELSE 
// Question :- Take positive integer input and tell if it is divisible by both 5 and 3 ?
#include<stdio.h>
#include<conio.h>
int main (){
    int n;
    printf("Enter number :- ");
    scanf("%d",&n);
    if (n%5==0){
        if (n%3==0)
        printf("yes");
        else {
            printf("No");

        }
    }
    else{
        printf("No");
    }
}