#include<stdio.h>
int main()
{
    char arr[]="rakib hossain saoud\0";
    int i=0;
    while (arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
}
