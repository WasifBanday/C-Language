// Question :- print hello world 'n' times . Take n input from an user ? 

#include<stdio.h>
#include<conio.h>
int main (){
    int n ;
    printf("Enter Value of 'n' :-");
    scanf("%d", &n);
    for (int i = 1 ; i <= n ; i++){
        printf("Hello Wolrd\n");
    }
    return 0 ;

}