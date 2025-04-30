// Take three positive integers input and print greatest among them ? Using Nested If-Else 
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main (){
    int a;
    printf("Enter 1st number:-  ");
    scanf("%d",&a);
    int b;
    printf("Enter 2nd number:-  ");
    scanf("%d",&b);
    int c;
    printf("Enter 3rd number:-  ");
    scanf("%d",&c);
    if (a>b){
        if(a>c)
        printf("%d is greatest",a);
        else
        printf("%d is greatest",c);
    }
    else{
        if(b>c)
        printf("%d is greatest",b);
        else
        printf("%d is greatest",c);
    }
        
    
    
}
    // int a;
    // printf("Enter 1st number :- ");
    // scanf("%d",&a);
    // int b;
    // printf("Enter 2rd number :- ");
    // scanf("%d",&b);
    // int c;
    // printf("Enter 3nd number :- ");
    // scanf("%d",&c);


    // if(a > b && a > c) {
    //     printf("%d is greatest" , a);
    // }
    // else if(b > a && b > c) {
    //     printf("%d is greatest" , b);

    // }
    // else{
    //     printf("%d is greatest" , c);
    // }
    // if(a>b && a>c){
    //     printf("%d is greater",a);
    //     if(b>a && b>c){
    //         printf("%d is greater",b);
    //     }
    //     else {
    //         printf("%d is greater",c);
    //     }
    // }
    // else{
    //     printf("%d is greater",c);
    // }

    // char str1[5] = "Hilal";
    // char str2[5] = "Hilal";

    // printf("%s" , str1);
    // printf("%d", strcmp(str1 , str2));

    // char username[5] = "Hilal";

    // char username[5];
    // printf("Enter username:- ");
    // scanf("%c" , &username);
    // printf("%c \n" , username);
//     char username[5] = "Hilal";
//     char email[30] = "hilalahmadcodedev123@gmail.com";
//     char password[8] = "password";


//     if(strcmp(username , "Hilal")){
//         if(strcmp(email , "hilalahmadcodedev123@gmail.com")){
//             if(strcmp(password , "password")){
//                 printf("\t\t LLogin successfully done");
//             }else{
//                 printf("Invalid password");
//             }
//         }else{
//             printf("Invalid email");
            
//         }
//     }else{
//         printf("Invalid username");
//     }



