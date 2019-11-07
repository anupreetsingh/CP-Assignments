#include<stdio.h>
int main()
{
	for(int i=6;i>0;i--)
	{
		for(int j=0;j<i;j++)
			printf("%c",65+j);
		printf("\n");
	}
	return 0;
}