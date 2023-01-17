#include<stdio.h>
int main(){
    int a=10,b=11;
    int *p,*q;
    p=&a;
    q=&b;
    p=q;
    *p=*q;
    printf("a=%d,%d,%d",a,*p,*q);
    return 0;
}