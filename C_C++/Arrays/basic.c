#include<stdio.h>
#include<conio.h>
int main(){

    int studentsAge[20] = {20 , 22 , 12 , 35 , 26 };
    printf("%d \n" , studentsAge[0]);
    printf("%d \n" , studentsAge[1]);
    printf("%d \n" , studentsAge[2]);
    printf("%d \n" , studentsAge[3]);
    printf("%d \n" , studentsAge[4]);


    printf("\n\n");


    for(int i = 0; i < 5; i++) {
        printf("%d \t" , studentsAge[i]);
    }




    return 0;
}