#include<stdio.h>

int main()
{
	int a,b,i,j,c;
	for(i=0;i<6;i++)
	{
		a=5;b=3;
		printf("(%d)(%d)",a,b);
		for(j=0;j<i;j++)
		{
			c=a+b;
			printf("(%d)",c);
			a=b;
			b=c;
		}
		printf("\n");
	}
	return 0;
}