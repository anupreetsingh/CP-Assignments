#include<stdio.h>

int main()
{
    int n, x, sum = 0, total = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Give %d Numbers: ", n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(x%2 == 1)
        {
            total++;
            sum += x;
        }
    }
    printf("The Average of Odd Numbers Is: %f", (float)sum/total);
}