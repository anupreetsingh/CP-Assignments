#include <stdio.h>
int main()
{
    int  x;
    for(x=0;x<100;x=x+1)
    {
        if(((x%10)%5==0||(x%10)%6==0||(x%10)%7==0||(x%10)%8==0)&&(x%10!=0))
            printf("%d\n",x);

    }
    return 0;
}
