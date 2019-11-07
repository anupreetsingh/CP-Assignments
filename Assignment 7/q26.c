#include<stdio.h>

int main()
{
    int k, x;
    printf("Enter x & k: ");
    scanf("%d %d", &x, &k);

    for(int i = 0; i < k-1; i++)
        x = x / 10;

    printf("The kth Digit Is: %d", x%10);
}