//Question:- Check weather the number is divisible by 5 or not ?
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a Number :- ");
    scanf("%d",&n);
    if(n%5==0){   
        printf("YES");
    }
    else{
        printf("NO");
    }
}