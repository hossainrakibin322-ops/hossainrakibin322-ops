#include<stdio.h>
int main()
{
    int n,time,fastest,position;
    printf("Enter the participate Number:");
    scanf("%d",&n);
    printf("Enter participate Number 1:");
    scanf("%d",&fastest);
    position=1;
    for(int i=2;i<=n;i++){
    printf("Enter %d participate number:",i);
    scanf("%d",&time);
    if(time<fastest)
    {
        fastest=time;
        position=1;
    }}
    printf("fastest time: %d\n",fastest);
    printf("position:%d\n",position);
    return 0;


}
