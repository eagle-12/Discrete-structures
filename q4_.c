#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int n;

int arr[100][100];
int flag[100]={0};
int flag2[100]={0};
int Ans=0;

void ways(int ele)
{
	flag[ele]=1;
	int flag1[100]={0};
	for(int i=0;i<n;i++)
	{
		flag1[i]=flag[i];
	}
	int fl=0;
	for(int i=0;i<n;i++)
	{
		int ct1=0;
		if(flag[i]==0)
		{
			for(int j=0;j<n;j++)
			{
				if(flag[j]==0 && arr[j][i]==1)
				{
					ct1=-1;
					break;
				}
			}
			if(ct1==0)
			{
				//printf("%d\n",i);
				//return;
				ways(i);
			
				for(int j=0;j<n;j++)
				{
					flag[i]=flag1[i];
				}
				fl++;
			}
		}
	}
	if(fl==1)
	{
		int c=0;
		for(int j=0;j<n;j++)
		{
			if(flag[j]==1)
			{
				c++;
			}
		}
		if(c==n-1)
		{
			Ans++;
		}
	}
}

int main()
{
	int k,x,y;
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=0;
		}
	}
	for(int i=0;i<k;i++)
	{
		scanf("%d %d",&x,&y);
		arr[x][y]=1;
	}
	/*for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}*/
	//int ans=0;
	for(int i=0;i<n;i++)
	{
		int ct1=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j][i]==1)
			{
				ct1++;
				break;
			}
		}
		if(ct1==0)
		{
			for(int j=0;j<n;j++)
			{
				flag[j]=0;
			}
			//printf("%d ",i);
			ways(i);
		}
	}
	printf("%d",Ans);
	return 0;
}
