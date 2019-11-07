#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter The Complex Number: ");
    scanf("%d%di", &a, &b);
    if(a == 0 && b ==0)
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