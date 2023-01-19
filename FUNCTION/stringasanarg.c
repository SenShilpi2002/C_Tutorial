#include<stdio.h>
void modify(char*,char*);    //in main() function whenever calling the function i.e;function definition 
                            //that time the strings will act as pointers in modify() and it will pointed  to the address of the two strings......



void main(){
    char str1[]="shilpi";
    char str2[]="zanna";
    modify(str1,str2);
}



void modify(char str1[],char str2[]){
    int i,len=0;
    for(i=0;str1[i]!=0;i++){
        len=len+1;
    }
    str2[0]='p';
    printf("The length of the string1 is %d \n ",len);
    printf("Bothe the string are %s,%s \n ",str1,str2);
}