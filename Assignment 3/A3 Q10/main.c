#include <stdio.h>
int main()
{
    int a,b,c,d,x,sum=0;
    printf("enter the values of a,b,c,d,x:");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
    if(x==a)
        sum=sum+1;
    if(x==b)
        sum=sum+1;
    if(x==c)
        sum=sum+1;
    if(x==d)
        sum=sum+1;
    printf("%d",sum);
    return 0;
}
