#include<stdio.h>
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("a=%d\n",a);
    printf("a=%d\n",*p);
    printf("a=%d\n",*q);
    printf("a=%d\n",***r);
    return 0;
}
//doublepointer-> it is a pointer where a pointer store the address of another 'pointer variable'.
//not a normal variable.
//that's why we need to put two * before that second pointer which is store the address of another one...
//suppose there are one example that->*q-> q is a pointer to pointed the address of another pointer 'p'..now we should put the datatype of that 'p' pointer variable before q'q' pointer...which likw as **q...
//there are different lable of double pointer...