#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the number a,b,c,d:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b&&a>c&&a>d)
        printf("%d is the biggest number",a);
    if(b>a&&b>c&&b>d)
        printf("%d is the biggest number",b);
    if(c>a&&c>b&&c>d)
        printf("%d is the biggest number",c);
    if(d>a&&d>b&&d>c)
        printf("%d is the biggest number",d);
    else
        printf("all the numbers are equal");
    return 0;
}
