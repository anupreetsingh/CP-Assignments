#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(b>c)
            printf("%d",b);
        else
        {
            if(a>c)
                printf("%d",c);
            if(c>a)
                printf("%d",a);
        }

    }
    else
    {
        if(c>b)
            printf("%d",b);
        else
        {
            if(a>c)
                printf("%d",a);
            if(c>a)
                printf("%d",c);
        }
    }
    return 0;
}
