#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, length;
    printf("Enter The Vector(No Spaces): ");
    scanf("%fi%fj%fk", &a, &b, &c);

    length = sqrt(a*a+b*b+c*c);

    printf("The Unit Vector Is: %fi + %fj + %fk", a/length, b/length, c/length);
}