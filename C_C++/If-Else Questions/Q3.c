// Question :-wAP to determine whether the seller has made profit or incurred loss  

#include<stdio.h>
#include<conio.h>
int main ()
{
    int cp;
    printf("Enter cost price :- ");
    scanf("%d",&cp);
    int sp;
    printf("Enter selling price :- ");
    scanf("%d",&sp);
    if(sp>cp){
        printf("PROFIT");
    }   
    
    else{
        printf("LOSS");
    }
    if(sp==cp){
        printf("NO PROFIT NO LOSS");
    }
}