//WAP to find out if the number is divisible by 5 or 2 but not 15 ?
#include<stdio.h>
#include<conio.h>
int main (){
    int n;
    printf("Enter Number :- ");
    scanf("%d",&n);
    if (n%5==0 || n%2==0) {
        if(n%15!=0){
            printf("Yes , The number is divided by 5 0r 2 but not 15");
        }
        else{
            printf("No it is divided by 15 as well");
        }

    }
    else {
        printf("No it is divided by 15 as well");
    }

    
}