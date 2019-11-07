#include<stdio.h>

int main()
{
    int a, b, n, sum = 0;
    
    printf("Enter The Number of Pairs: ");
    scanf("%d", &n);

    fflush(stdin);

    printf("Enter The Pairs(a,b): ");

    for(int i = 0; i < n-1; i++)
    {
        scanf("(%d,%d) ", &a, &b);
        sum += a*b;
    }
    scanf("(%d,%d)", &a, &b);
    sum += a*b;

    printf("The Sum of Product of Pairs Is: %d", sum);
}