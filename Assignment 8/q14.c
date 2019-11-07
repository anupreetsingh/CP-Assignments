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
        if((x/10)%10 <= (x%10))
            sum += x;
        else
            sum += ((x/100)*100) + ((x/10)%10) + ((x%10)*10);
    }
    printf("The Required Sum Is: %d", sum);
}