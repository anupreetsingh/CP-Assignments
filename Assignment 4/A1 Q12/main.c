#include <stdio.h>
int main()
{
    int x;
    for(x=0;x<100;x=x+1)
    {
        if((x/10)%2==1)
        printf("%d\n",x);
    }

    return 0;
}
