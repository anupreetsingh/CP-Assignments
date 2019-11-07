#include <stdio.h>
int main()
{
    //let the equation of the circle be x^2+y^2+ax+by+c=0
    float a,b,c,p,q,r;
    printf("enter the values of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    //let the center be (p,q) and radius be r
    p=-a/2;
    q=-b/2;
    r=sqrt(p*p+q*q-c);
    printf("center is (p,q):(%.2f,%.2f) \nradius is %f",p,q,r);
    return 0;
}
