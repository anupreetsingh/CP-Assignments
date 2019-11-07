#include <stdio.h>
int main()
{
    int x;
    for(x=10;x<100;x=x+1)
    {
        if((x/10)%3==1)
        printf("%d\n",x);
    }
    return 0;
}
