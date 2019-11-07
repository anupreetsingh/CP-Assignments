#include<stdio.h>

int main()
{
    int n, x, sum = 0;
    char semi;
    printf("Enter n & Corresponding n Numbers: ");
    scanf("%d;", &n);

    for(int i = 0; i < n-1; i++)
        scanf("%c", &semi);
    for(int i = 0; i < n-1; i++)
    {
        scanf("%d,", &x);
        sum += x;
    }
    scanf("%d", &x);
    sum += x;
    printf("The Sum Is: %d", sum);
}