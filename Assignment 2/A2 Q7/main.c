#include <stdio.h>
int main()
{
    //equations of 2 lines be ax+by+c=0 and px+qy+r=0
    float a,b,c,p,q,r,x,y;
    printf("enter the values of a,b,c,p,q,r:");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&p,&q,&r);
    x=(b*r-c*q)/(a*q-p*b);
    y=(a*r-c*p)/(b*p-a*q);
    printf("point of intersection is :%f,%f",x,y);
    return 0;
}
