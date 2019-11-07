#include<stdio.h>

int main()
{
    int n, x, sum=0, t=1;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Give %d Numbers: ", n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(i == (t*t-t+2)/2)  // The Series 1, 4 , 7, 11 is given by f(n) = (n*n - n + 2)/2
        {
            t++;
            sum += x;
        }
    }
    printf("The Answer Is: %d", sum);
}