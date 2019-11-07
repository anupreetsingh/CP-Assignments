#include<stdio.h>
#include<math.h>

int main()
{
    float a, n, mag = 0;
    printf("Enter The Number of Dimensions: ");
    scanf("%f", &n);
    fflush(stdin);
    printf("Enter The Coordinates: ");
    scanf("(%f,", &a);
    mag += a*a;
    for(int i = 0; i < n-2; i++)
    {
        scanf("%f,", &a);
        mag += a*a;
    }

    scanf("%f)", &a);
    mag += a*a;

    printf("The Magnitude of Entered Vector: %f", sqrt(mag));
}