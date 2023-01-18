//there are three aspects in c function
//fuction declaration->a function must be declared globally in a c program to tell the compiler about the function name ,function parameter and return type...return_type function name(arguments)
//funtion calling->function can be called from anywhere in the program...funtion_name(arguments)
//funtion definition->it contains the actual statements which are to be executed.it is the most important aspecr to which the control comes when the function is called.....return_type function name(argumentslist){funtion body}

#include<stdio.h>
int sum();   //function declaration
int main(){  //function calling...
    int sum();
}
int sum(){    //funtion definition
    int a,b,sum=0;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
    return 0;
}