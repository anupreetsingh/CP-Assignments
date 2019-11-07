#include<stdio.h>

int main()
{
    int n, x, sum=0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Give %d Numbers: ", n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(x >= 30 && x <= 90)
            sum += x;
    }
    printf("The Required Sum Is: %d", sum);
}