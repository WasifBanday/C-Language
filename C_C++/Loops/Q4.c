// Question :- Print even numbers from 1 to 100?
#include<stdio.h>
#include<conio.h>
int main (){
    for(int i = 1 ; i <= 100; i++){
        if(i%2==0)
        printf("%d\n",i);
    }
    return 0;
}