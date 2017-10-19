#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int n;
int b[1000];

void bits(int x)
{
	int i=0;
	for(int y=0;y<n;y++)
	{
		b[y]=0;
	}
	while(i<n)
	{
		b[i++]=(x%2);
		x/=2;
	}
}

int main()
{
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int k,ct;
	scanf("%d",&k);
	int num=pow(2.0,n);
	for(int i=0;i<num;i++)
	{
		bits(i);
		ct=0;
		for(int j=0;j<n;j++)
		{
			if(b[j]==1)
			{
				ct++;
			}
			//printf("%d",b[j]);
		}
		//printf("\n");
		if(ct==k)
		{
			for(int j=0;j<n;j++)
			{
				if(b[j]==1)
				{
					printf("%d ",arr[j]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
