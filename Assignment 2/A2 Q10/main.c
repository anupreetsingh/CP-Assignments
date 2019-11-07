#include <stdio.h>
#include<math.h>
int main()
{
    float h,k,r,s,d,l;
    printf("enter the  values of h,k,r,s");
    scanf("%f %f %f %f",&h,&k,&r,&s);
    d = s-h;
    l=2*sqrt(r*r-d*d);
    printf("the cord length is:%f",l);
    return 0;
}
