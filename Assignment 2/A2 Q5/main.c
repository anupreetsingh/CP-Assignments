#include <stdio.h>
int main()
{
    float a,b,c,d,e,dist;
    printf("enter the values of a,b,c,d,e:");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    dist=(a*c+b*d+e)/sqrt(c*c+d*d);
    printf("the distance of the point (a,b) from the line cx+dy+e=0 is %f",dist);
    return 0;
}
