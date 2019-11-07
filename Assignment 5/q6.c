#include<stdio.h>

int main()
{
    int x, y;
    for(int y = 0; y < 10; y++)
    {
        for(int x = 0; x < 20; x++)
        {
            if(((y%2 == 1) && (x%5 == 0)) || ((y%2 == 0) && (x%5 != 0)))
                printf("*");
            else
                printf("O");
        }
        printf("\n");
    }
}