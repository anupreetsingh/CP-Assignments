#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f,X,Y,Z,S,A;
    printf("enter the values of a,b,c,d,e,f:");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    //X,Y,Z ARE THE LEGNTHS OF SIDES OF THE TRIANGLE
    X=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    Y=sqrt((c-e)*(c-e)+(d-f)*(d-f));
    Z=sqrt((a-e)*(a-e)+(b-f)*(b-f));
    //S IS SEMI-PERIMETER AND A IS AREA OF THE TRIANGLE
    S=(X+Y+Z)/2;
    A=sqrt((S)*(S-X)*(S-Y)*(S-Z));
    printf("area is %f",A);
    return 0;

}
