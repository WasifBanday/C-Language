// Question :- Take an positive integer(n) and tell if it is divisible by 5 or 3 ?
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    printf("Enter number :- ");
    scanf("%d",&n);
    if(n%5==0 || n%3==0){     // Using OR gate representation = ||
        printf("Yes the number is divisible by 5 or 3");
    }
    else {
        printf("No , the number is not divisible by 3 or 5  ");
    }

}