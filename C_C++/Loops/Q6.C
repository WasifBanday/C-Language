// Question :- print the Tble of n , here n is an integer which user will input ?
#include<stdio.h>
#include<conio.h>
int main (){
    int n ; 
    printf("Enter value of N :- ");
    scanf("%d",&n);
    for (int i = 1 ; i <= 10; i++){
        printf(" %d * %d = %d\n", n , i , n*i);
    }

    return 0 ;
}
