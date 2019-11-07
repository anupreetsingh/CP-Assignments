#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,S,X,A;
    printf("enter the values of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    S=(a+b+c)/2;
    X=(S)*(S-a)*(S-b)*(S-c);
    A=pow(X,0.5);
    printf("%f",A);
    return 0;
}
