#include<stdio.h>
int main(){

    int a[]={12, 23, 45, 34, 56, 70};
    int *p;
    p=a;
    printf("%d\n",*p++);
     printf("%d\n%d\n",*p++,*p++);
      printf("%d\n",*p);
       printf("%d\n",*++p,*++p);
       printf("%d\n",*p);
    return 0;
}
