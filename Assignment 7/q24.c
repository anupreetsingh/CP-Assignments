#include<stdio.h>

int main()
{
    int a;
    printf("Enter The Number: ");
    scanf("%4d", &a);
    printf("The Fourth Digit is: %d.", a-(a/10)*10);
}