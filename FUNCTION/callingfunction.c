#include <stdio.h>     //call by value
void fun(int, int);   //actual parameter
void main()
{
    int x = 5, y = 7;
    fun(x, y);
    printf("x=%d,y=%d", x, y);
}
void fun(int x, int y)   //formal parameter
{
    x = 7;
    y = 5;
    printf("x=%d,y=%d", x, y);
}

//output will be in fun() are x=7 and y=5
// and in main function the value of x=5 and y=7
//cause the function have called by its value so whenever fun() will called by main that time the value ofthat two parameters will printed according to the value which have declared in it.....
