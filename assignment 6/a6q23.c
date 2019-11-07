#include<stdio.h>
int main()
{
	int j,b;
	for(int i=1,a=20;i<=6;i++)
	{
		for(j=0,a-=i,b=a+1;j<i;j++,b++)
			printf("%c",65+b);
		printf("\n");
	}
	return 0;
}