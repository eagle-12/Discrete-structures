#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][n];
	int num[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=0;
		}
		num[i]=0;
	}
	int k,x,y;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d %d",&x,&y);
		arr[x][y]=1;
	}
	int ct=0;
	int fl;
	while(ct<n)
	{
		for(int i=0;i<n;i++)
		{
			fl=0;
			for(int j=0;j<n;j++)
			{
				if(num[j]==0 && arr[j][i]==1)
				{
					fl=1;
				}
			}
			if(fl==0)
			{
				num[i]=1;
			}
		}
		ct++;
	}
	for(int i=0;i<n;i++)
	{
		if(num[i]==0)
		{
			printf("Not Possible");
			return 0;
		}
	}
	printf("Possible");
	return 0;
}
