#include <stdio.h>
#include<math.h>
int main()
{
    int p,q,r,a,b,c,d,l,A;
    printf("enter the values of p,q,r,a,b,c:");
    scanf("%d%d%d%d%d%d",&p,&q,&r,&a,&b,&c);
    //(p.q) are the centre of the circle and the line is ax+by+c=0
    d=(a*p+b*q+c)/(sqrt(a*a+b*b));
    if(d>r)
        printf("the line and the circle do not intersect");
    else
    {
        printf("the line and the circle intersect\n");
        l=2*sqrt(r*r-d*d);
        A=(d*l)/2;
        printf("Area of the triangle is %d",A);

    }
    return 0;
}
