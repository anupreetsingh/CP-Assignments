#include<stdio.h>

int main()
{
    int x, y;
    for(int y = 0; y < 10; y++)
    {
        for(int x = 0; x < 20; x++)
        {
            if(x % 2 == y % 2)
                printf("O");
            else
                printf("*");
        }
        printf("\n");
    }
}