#include<stdio.h>
int main(){
    int  a=10,b=9;
    int c;
    int *p,*q;
    p=&a;
    q=&b;
    c=*p;
    printf("Enter the value of a =%d\n",a);
     printf("Enter the adress of a =%x\n",&a);    
       printf("Enter the value of c =%d\n",c);
        printf("Enter the value of b =%d\n",*q);
       return 0;
}