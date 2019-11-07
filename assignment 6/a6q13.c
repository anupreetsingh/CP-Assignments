#include<stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=0;j<i;j++)
			printf("%c",97+j);
		for(int j=i;j<6;j++)
			printf("%c",65+j);
		printf("\n");
	}
	return 0;
}