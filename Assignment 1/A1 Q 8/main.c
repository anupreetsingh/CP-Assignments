#include <stdio.h>
int main()
{
    int x,y,z;
    printf("enter the number:");
    scanf("%d",&x);
    y=(x%10)*2;
    z=y+((x/10)*10);
    printf("%d",z);
    return 0;
}
