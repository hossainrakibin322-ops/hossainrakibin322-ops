#include<stdio.h>
void multification(int n)
{   for(int i=0;i<=10;i++)
    printf("%d x %d=%d\n",n,i,n*i);
}
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    multification(num);
    return 0;
}
