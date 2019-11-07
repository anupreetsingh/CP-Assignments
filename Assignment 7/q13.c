#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter The Vector: ");
    scanf("%di%dj%dk", &a, &b, &c);
    if(a == 0 && b == 0 && c == 0)
        printf("The Complex Number Is: 0");    
    else if(a == 0)
        printf("The Complex Number Is: %di", b);
    else if(b == 0)
        printf("The Complex Number Is: %d", a);
    else if(b < 0)
        printf("The Complex Number Is: %d - %di", a, -b);
    else
        printf("The Complex Number Is: %d + %di", a, b);

}