#include<stdio.h>

int main()
{
    int n, x, sum = 0;
    printf("Enter n & Corresponding n Numbers: ");
    scanf("%d,", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d,", &x);
        sum += x;
    }
    printf("The Sum Is: %d", sum);
}