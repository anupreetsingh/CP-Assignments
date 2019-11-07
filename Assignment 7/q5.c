#include<stdio.h>

int main()
{
    int a, b, c, d, e, f;
    printf("Enter The First Vector(No Spaces): ");
    scanf("%di%dj%dk", &a, &b, &c);


    fflush(stdin);
    printf("Enter The Second Vector: ");
    scanf("%di%dj%dk", &d, &e, &f);

    printf("The Dot Product Is: %d", a*d + b*e + c*f);
}