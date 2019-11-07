#include <stdio.h>
int main()
{

    int x;
    for (x=0;x<100;x=x+2)
    {
        if(x%3!=0&&x%5!=0)
            printf("%d\n",x);
    }
    return 0;
}
