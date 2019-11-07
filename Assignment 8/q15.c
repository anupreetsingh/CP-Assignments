#include<stdio.h>

int main()
{
    int n, x, weighted_sum = 0, total_weight = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Give %d Numbers: ", n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(x % 2 == 0)
        {
            weighted_sum += i*x;
            total_weight += i;
        }
    }
    printf("The Weighted Average of Even Numbers Is: %f", (float)weighted_sum/total_weight);
}