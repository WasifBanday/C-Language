// Question of hierarchy order : what will be the output
// int main(){
//int i=2,j=3,k,l;
//float a,b;
//k = i/j*j;
//l = j/i*i;
//a = i/j*j;
//b = i/j*i;

#include<stdio.h>
#include<conio.h>
int main ()
{
    int i = 2 , j = 3 , k , l;
    float a,b;
    k = i/j*j;
    l = j/i*i;
    a = i/j*j;
    b = j/i*i;
    printf("K:-%d\nL:-%d\nA:-%f\nB:-%f",k,l,a,b);

    
}