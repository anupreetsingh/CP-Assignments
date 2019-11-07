#include<stdio.h>

int main()
{
    float a, b, c;
    printf("Enter The Line Equation(No Spaces): ");
    scanf("%fx%fy%f", &a, &b, &c);
    printf("The Line Intersects x-Axis at: (%f, 0)", -c/a);
}
