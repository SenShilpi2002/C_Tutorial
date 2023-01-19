#include<stdio.h>
void modify(char*,char*);



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