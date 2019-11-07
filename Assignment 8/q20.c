#include<stdio.h>

int main()
{
    int n, x, k,sum=0, i_even = 0;

    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k);

    printf("Give %d Numbers: ", n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(i_even >= k)
            sum += x;
        if(x % 2 == 0)
            i_even++;
    }
    printf("The Answer Is: %d", sum);
}