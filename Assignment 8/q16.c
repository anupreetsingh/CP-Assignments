#include<stdio.h>

int main()
{
    int n, x, sum=0, i_even = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Give %d Numbers: ", n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(x % 2 == 0)
        {
            sum += i_even*x;
            i_even++;
        }
    }
    printf("The Weighted Sum of Even Numbers Is: %d", sum);
}