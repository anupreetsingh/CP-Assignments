#include<stdio.h>
#include<math.h>

int main()
{
    int a, n, m, sum = 0;
    printf("Enter The Number of Members: ");
    scanf("%d", &n);
    printf("Enter The Size of a Member: ");
    scanf("%d", &m);
    fflush(stdin);
    printf("Enter The Coordinates: ");
    for(int i = 0; i < n-1; i++)
    {
        scanf("(%d,", &a);
        sum += a;
        for(int i = 0; i < m-2; i++)
        {
            scanf("%d,", &a);
            sum += a;
        }
        scanf("%d) ", &a);
        sum += a;
    }
    {
        scanf("(%d,", &a);
        sum += a;
        for(int i = 0; i < m-2; i++)
        {
            scanf("%d,", &a);
            sum += a;
        }
        scanf("%d)", &a);
        sum += a;
    }

    printf("The Sum Is: %d", sum);
}