#include<stdio.h>
int main()
{
	int k=1,a=1,b=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<(6-i)*(i+1);j+=k)
		{
			for(a=1;a<=k;a++)
				printf("%c",65+b);
			b++;
		}
	k+=1;
	b=i+1;
	printf("\n");	
	}
	for(int i=2;i>=0;i--)
	{
		for(int j=(6-i)*(i+1);j>0;j-=k)
		{
			for(a=1;a<=k;a++)
				printf("%c",65+b);
			b++;
		}
	k+=1;
	b=i+2;
	if(i==1)
		b=5;
	printf("\n");	
	}
	return 0;
}