#include<stdio.h>
int main()
{
    float a, b, c, d;
    printf("Enter The First Complex Number(No Spaces): ");
    scanf("%f%fi", &a, &b);

    fflush(stdin);

    printf("Enter The Second Complex Number(No Spaces): ");
    scanf("%f%fi", &c, &d);

    printf("The Product Is: %f + %fi",  a*c-b*d, b*c+a*d);
    printf("The Quotient Is: %f + %fi", (a*c+b*d)/(c*c+d*d), (b*c-a*d)/(c*c+d*d));
}