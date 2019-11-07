#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, disc;
    
    printf("Enter The Quadratic Equation(No Spaces): ");
    scanf("%fx^2%fx%f", &a, &b, &c);

    disc = b*b - 4*a*c;

    if(disc > 0)
        printf("The Roots Are: %f & %f", (-b+sqrt(disc))/(2*a), (-b-sqrt(disc))/(2*a));
    else if(disc == 0)
        printf("The Common Root Is: %f", (-b+sqrt(disc))/(2*a));
    else if(disc < 0)
    {
        printf("The Roots Are: (%f + %fi) & (%f - %fi).", -b/2*a, sqrt(-disc)/(2*a), -b/2*a, -sqrt(-disc)/(2*a));   
    }
}