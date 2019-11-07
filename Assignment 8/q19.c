#include<stdio.h>

int main()
{
    int n, x, sum=0;
    int even_found = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Give %d Numbers: ", n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(even_found == 1)
            sum += x;
        if(x % 2 == 0)
            even_found = 1;
    }
    printf("The Answer Is: %d", sum);
}