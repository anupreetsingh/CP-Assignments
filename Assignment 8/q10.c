#include<stdio.h>

int main()
{
    int n, x, total=0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Give %d Numbers: ", n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(x % 2 == 1)
            total++;
    }
    printf("The Total Number of Odd Numbers Is: %d", total);
}