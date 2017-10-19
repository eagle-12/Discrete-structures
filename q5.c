#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int ans[100][100]={0};
int vis[100]={0};
int arr[100][100]={0};
int r,n;

void dfs(int x)
{
	vis[x]=1;
	for(int i=0;i<n;i++)
	{
		if(arr[x][i]==1 && vis[i]==0)
		{
			ans[x][i]=1;
			if(r!=i)
			{
				ans[r][i]=1;
			}
			dfs(i);
		}
	}
}

int main()
{	
	scanf("%d",&n);
	int k;
	scanf("%d",&k);
	int x,y;
	for(int i=0;i<k;i++)
	{
		scanf("%d %d",&x,&y);
		arr[x][y]=1;
		ans[x][y]=1;
	}
	for(r=0;r<n;r++)
	{
		for(int i=0;i<n;i++)
		{
			vis[i]=0;
		}
		dfs(r);
	}
	for(int i=0;i<n;i++)
	{
		int ct=0;
		for(int j=0;j<n;j++)
		{
			//printf("%d ",ans[i][j]);
			if(ans[i][j]==1)
			{
				printf("%d ",j);
				ct++;
			}
		}
		if(ct==0)
		{
			printf("-");
		}
		printf("\n");
	}
	return 0;	
}
