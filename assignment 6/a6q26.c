#include<stdio.h>

int main()
{
	for(int i=7,a=4;i>0;i--,a++)
	{
		for(int j=0;j<=30;j+=a)
			printf("%d,",j);
		printf("\n");
	}
	return 0;
}