#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	int k;
	scanf("%d",&k);
	int arr[n][n];
	int num[n];
	int x,y;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=0;
		}
		num[i]=0;
	}
	for(int i=0;i<k;i++)
	{
		scanf("%d %d",&x,&y);
		arr[x][y]=1;
	}
	x=n;
	int ans=1;
	int ct1=0,ct;
	while(x)
	{
		ct1=0;
		for(int i=0;i<n;i++)
		{
			if(num[i]==0)
			{
				ct=0;
				for(int j=0;j<n;j++)
				{
					if(num[j]==0 && arr[j][i]==1)
					{
						ct++;
					}
				}
				if(ct==0)
				{
					//ans[r++]=i;
					num[i]=1;
					ct1++;
				}
			}
		}
		ans*=ct1;
		x-=ct1;
	}
	printf("%d\n",ct1);
}
