#include<stdio.h>

int main()
{
    int a, b, c, d, e, f;
    printf("Enter The First Vector(No Spaces): ");
    scanf("%di%dj%dk", &a, &b, &c);


    fflush(stdin);
    printf("Enter The Second Vector: ");
    scanf("%di%dj%dk", &d, &e, &f);

    printf("The Cross Product Is: %di + %dj + %dk", (b*f-c*e), (c*d-a*f), (a*e-b*d));
}