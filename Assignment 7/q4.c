#include<stdio.h>

int main()
{
    float a, b, c, d;
    printf("Enter The First Point(a,b): ");
    scanf("(%f, %f)", &a, &b);

    fflush(stdin);
    printf("Enter The Second Point(c,d): ");
    scanf("(%f, %f)", &c, &d);
    printf("(%f, %f) is the mid point.", (a+c)/2, (b+d)/2); 
}