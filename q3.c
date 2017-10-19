#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=0;
	}
	int k,ct;
	scanf("%d",&k);
	int arr[n][n];
	int num[n];
	int x,y,r=0;
	int ans[n];
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
	while(x--)
	{
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
					ans[r++]=i;
					num[i]=1;
					break;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",ans[i]);
	}
	return 0;
}
