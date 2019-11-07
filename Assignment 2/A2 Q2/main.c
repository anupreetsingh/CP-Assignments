#include <stdio.h>
int main()
{
    float a,b,c,d,D;
    //D IS THE DISTANCE
    printf("enter the values of a,b,c,d:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    D=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    printf("%f",D);
    return 0;
}
