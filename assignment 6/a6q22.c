#include<stdio.h>

int main()
{
	int i,j,a=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<a+i;j++)
		{
			printf("%c",65+i+j);
		}
		a=j;
		printf("\n");
	}
	return 0;
}
