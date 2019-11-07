#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a*a==b*b+c*c)
        printf("angle A is 90 degree");
    else
        printf("angle A is not 90 degree");
    return 0;
}
