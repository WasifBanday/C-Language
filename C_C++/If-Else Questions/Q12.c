// Question:- Take input percentage of student and print the grade according to marks ?
//more then 80 marks = Grade A
//more then 60 marks = Grade B
//more then 40 marks = Grade C
//less then 40 marks = Grade D
#include<stdio.h>
#include<conio.h>
int main (){
    int n ;
    printf("Enter Percentage:- ");
    scanf("%d",&n);
    if(n>80){
        printf("Grade A");
    }
    else if (n>60){
         printf("Grade B");
    } 
    else if (n>40){
         printf("Grade C");
    }
    else{
        printf("Grade D");
    }
}