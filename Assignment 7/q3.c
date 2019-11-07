#include<stdio.h>
int main()
{
    float a, b, c, d;
    printf("Enter The 4 Numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    printf("%0.3f %0.3f\n%0.5f %0.1f", a, b, c, d);
}