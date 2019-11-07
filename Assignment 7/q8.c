#include<stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter The First Complex Number(No Spaces): ");
    scanf("%d%di", &a, &b);

    fflush(stdin);

    printf("Enter The Second Complex Number(No Spaces): ");
    scanf("%d%di", &c, &d);

    printf("The Sum Is: %d + %di", a+c, b+d);
}