#include <stdio.h>
int main()
{
    int x;
 for(x=10;x<100;x=x+1)
 {
     if((x>9&&x<30||x>39&&x<60||x>69&&x<90)&&x%2==0)

     printf("%d\n",x);

 }
 return 0;
}
