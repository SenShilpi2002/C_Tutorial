#include <stdio.h>

int avg(int[], int);

void main()
{

    int average;
    int marks[5] = {10, 23, 45, 67, 34}, size;
    size = sizeof(marks) / sizeof(marks[0]); // to get a size of an arry  we can use this operator ..
                                             //sizeof() operator return the size of the array...
    average = avg(marks, size);     //in the average function  just we need to declare the name only of the array...
    printf("avg=%d", average);
}

avg(int marks[], int a)   //in the part of function definition  the array i.e;marks[] act as the pointer that means when this function is call in main fun. that time this array act as call by referance that means pointer would be always call by referance...... 
{
    int i, sum = 0, average = 0;
    for (i = 0; i < a;i++)
    {
        sum = sum + marks[i];
    }
    average = average / a;
    return average;

}