#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x,A;
    printf("enter the values of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    x=(b*b+c*c-a*a)/(2*b*c);
    A=acos(x);
    printf("the value of angle is %f",A);
    return 0;
}
