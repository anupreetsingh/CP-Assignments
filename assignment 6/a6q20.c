#include<stdio.h>
int main()
{
	for(int i=0,a=0;i<6;i++)
	{
		for(int j=0;j<=i;j++,a++)
			printf("%c",65+a);
		printf("\n");
	}
	return 0;
}