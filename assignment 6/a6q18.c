#include<stdio.h>

int main()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
			printf(" ");
		for(j=0;j<i+1;j++)
			printf("%c",65+j);
		for(j=i-1;j>=0;j--)
			printf("%c",65+j);
		printf("\n");
	}
	return 0;
}