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
	int num=pow(2.0,n);
	int ele[n];
	//printf("num=%d",num);
	/*bits(1);
	for(int y=0;y<n;y++)
	{
		printf("x%d",b[y]);
	}
	printf("\n");*/
	for(int i=1;i<num;i++)
	{
		bits(i);
		/*for(int y=0;y<n;y++)
		{
			printf("%d",b[y]);
		}
		printf("\n");*/
		int k=0,ct=0;
		for(int j=0;j<n;j++)
		{
			if(b[j]==1)
			{
				ele[k++]=arr[j];
			}
		}
		for(int j=0;j<k;j++)
		{
			for(int r=0;r<k;r++)
			{
				if(r!=j && ele[r]%ele[j]==0)
				{
					ct++;
				}
			}
		}
		if((k%2==0 && ct%2==0)|| (k%2==1 && ct%2==1))
		{
			for(int x=0;x<k;x++)
			{
				printf("%d ",ele[x]);
			}
			printf("\n");
		}
	}
	return 0;
}
