#include<stdio.h>
#include<conio.h>
int main()
{
    float m1=100; //Maths
    float m2=78; //Physics
    float m3=89; //Chemistry
    float m4=79; //English
    float m5=95; //EVS                           // Total marks = 500 (from 100 in each subject)
    float p=(m1+m2+m3+m4+m5)/500*100;           //percentage formula = obtained marks /total marks * handred
    printf("Percentage OF 5 Subjects = %f",p);
}