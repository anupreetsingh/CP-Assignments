#include <stdio.h>
int main()
{
    int n,x;
    printf("enter the number:");
    scanf("%d",&n);
    x=(((n/100)*10)+(n%10))*10+(n/10)%10;
    printf("%d",x);
    return 0;


}
