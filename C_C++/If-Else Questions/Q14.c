// Question :- predict the output 
//      main(){
//          int x=3 , y , z
//          y=x=10
//          z=x<10
//          printf("\nx=%d y=z%d z=%d",x,y,)
//         }
#include<stdio.h>
#include<conio.h>
int main(){
    int x = 3 , y , z ;
    y = x = 10 ;
    z = x < 10 ;      // Here z is equal to 10 so its not less than 10 its false means ( 0 )
    printf("\nx = %d \ny = %d \nz = %d ", x,y,z);
}