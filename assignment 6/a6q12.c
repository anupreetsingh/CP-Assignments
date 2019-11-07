#include<stdio.h>
int main()
{
	for(int i=1;i<=6;i++)
	{
		for(int j=0;j<i;j++)
			printf("%c",65+j);
		for(int j=0;j<(6-i);j++)
			printf("%c",97+j);
		printf("\n");
	}
	return 0;
}