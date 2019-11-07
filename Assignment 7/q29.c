#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, n, sum=0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d Numbers: ", 2*n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        sum += pow(a,b);
    }
    printf("The Required Sum Is: %d", sum);
}