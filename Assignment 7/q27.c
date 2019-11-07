#include<stdio.h>

int main()
{
    int x;
    printf("Enter The Number: ");
    scanf("%d", &x);
    while(x > 0)
    {
        if((x%10)%2 == 0)
        {
            printf("The First Even Digit Is: %d", x%10);
            return 0;
        }
        x /= 10;
    }
    printf("No Even Digits Found.");
}