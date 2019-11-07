#include<stdio.h>

int main()
{
    int a, b, n, c=0, d=0;

    printf("Enter The Number of Complex Numbers: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf("Enter %d Complex Number: ", i);
        scanf("%d%di", &a, &b);
        c += a;
        d += b;
        fflush(stdin);
    }
    printf("The Sum of Complex Numbers Is: %d + %di", c, d);    
}