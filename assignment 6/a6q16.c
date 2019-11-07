#include<stdio.h>
int main()
{
	for(int i=1;i<=6;i++)
	{
		int k=0;
		for(int j=0;j<=(6-i);j++)
		{
			printf("%c",65+k);
			k+=i;
		}
		printf("\n");
	}
	return 0;
}