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
	int m,x;
	int arr[k][n+1];
	for(int i=0;i<k;i++)
	{
		scanf("%d",&m);
		for(int j=0;j<m;j++)
		{
			scanf("%d",&x);
			arr[i][x]=1;
		}
		scanf("%d",&arr[i][n]);
	}
	int o,fl;
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=0;
	}
	scanf("%d",&o);
	for(int i=0;i<o;i++)
	{
		scanf("%d",&x);
		a[x]=1;
	}
	for(int i=0;i<k;i++)
	{
		fl=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==1 && a[j]==0)
			{
				fl=-1;
				break;
			}
		}
		if(fl==0)
		{
			a[arr[i][n]]=1;
		}
	}
	for(int i=k-1;i>=0;i--)
	{
		fl=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==1 && a[j]==0)
			{
				fl=-1;
				break;
			}
		}
		if(fl==0)
		{
			a[arr[i][n]]=1;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return 0;
}
