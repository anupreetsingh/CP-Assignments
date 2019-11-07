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
        sum += ((x/100)*100) + ((x/10)%10) + ((x%10)*10);
    }
    printf("The Sum Is: %d", sum);
}