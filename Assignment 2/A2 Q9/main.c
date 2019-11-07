#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f,g,h,x,y,z,D,R,r,A;
    printf("enter the values of a,b,c,d,e,f,g,h");
    scanf("%f%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g,&h);
    //the equation of the plane is ax+by+cz+d=0 and the equation of sphere if x^2+y^2+z^2+ex+fy+gz+h=0
    //center of the sphere is x,y,z
    x=-e/2;
    y=-f/2;
    z=-g/2;
    //D is distance of sphere from the plane
    D=(a*x+b*y+c*z+d)/(sqrt(a*a+b*b+c*c));
    //R is radius of the sphere and r is radius of circle
    R=sqrt(x*x+y*y+z*z-h);
    r=sqrt(R*R-D*D);
    //A is the area of the circle
    A=3.14*r*r;
    printf("the area of the circle is:%f",A);
    return 0;

}
