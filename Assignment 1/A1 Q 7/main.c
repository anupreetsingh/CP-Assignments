#include <stdio.h>
int main()
{
    int x,y,z,S;
    printf("enter the number:");
    scanf("%d",&x);
    y=x%10;
    z=(x/10)%10;
    S=y+z;
    printf("%d",S);
    return 0;

}
