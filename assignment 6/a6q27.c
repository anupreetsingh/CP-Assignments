#include<stdio.h>

int main()
{
	for(int i=7,a=4;i>0;i--,a++)
	{
		for(int j=0,b=i+1;b>0;j+=a,b--)
			printf("%d,",j);
		printf("\n");
	}
	return 0;
}