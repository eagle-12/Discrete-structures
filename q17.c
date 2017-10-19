#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int ct=0;
int b[1000];

void bits(int x)
{
	int i=0;
	for(int y=0;y<ct;y++)
	{
		b[y]=0;
	}
	while(i<ct)
	{
		b[i++]=(x%2);
		x/=2;
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	int skill[n+1],col[n+1],req[n+1],ans[n+1];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&skill[i]);
		col[i]=0;
		req[i]=0;
		ans[i]=0;
	}
	col[n]=0;
	req[n]=0;
	ans[n]=0;
	int k,x;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d",&x);
		col[x]=1;
	}
	int l;
	scanf("%d",&l);
	for(int i=0;i<l;i++)
	{
		scanf("%d",&x);
		req[x]=1;
	}
	for(int i=0;i<n;i++)
	{
		if(req[i]==1 && col[i]==0)
		{
			ans[i]=1;
		}
		else if(req[i]==1 && col[i]==1)
		{
			ans[i]=-1;
			ct++;
		}
	}
	/*for(int i=0;i<n+1;i++)
	{
		printf("%d ",ans[i]);
	}*/
	int x1=pow(2,ct);
	for(int i=0;i<n;i++)
	{
		x=0;
		bits(i);
		for(int j=0;j<n+1;j++)
		{
			if(ans[j]==1)
			{
				printf("%d ",j);
			}
			else if(ans[j]==-1 && b[x++]==1)
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
	return 0;
}
