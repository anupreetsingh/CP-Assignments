#include<stdio.h>

int main()
{
    int a;
    printf("Enter The Number: ");
    scanf("%2d", &a);
    printf("The Second Digit is: %d.", a-(a/10)*10);
}