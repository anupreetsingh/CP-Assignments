#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter The First Number: ");
    scanf("%1d", &a);
    fflush(stdin);
    printf("Enter The Second Number: ");
    scanf("%1d", &b);
    printf("The Product of First Digits is: %d", a*b);
}