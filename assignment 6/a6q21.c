#include<stdio.h>

int main()
{
	int i,j,a=0;
	for(i=1;i<=5;i++)
	{
		for(j=0;j<a+i;j++)
		{
			printf("%c",65);
		}
		a=j-1;
		printf("\n");
	}
	return 0;
}
