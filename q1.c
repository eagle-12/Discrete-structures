#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int max(int x,int y)
{
	return (x>y)?x:y;
}

int main()
{
	int n,k,k1=0,x=0;
	scanf("%d",&n);
	int arr[n][100];
	int ct[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k);
		ct[i]=k;
		if(ct[i]>1)
		{
			if(ct[i]==2)
			{
				x++;
			}
			else
			{
				x+=ct[i];
			}
		}
		k1=max(k1,k);
		for(int j=0;j<k;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("%d\n",x);
	printf("\n");
	int mn=0;
	while(x>0)
	{
		int i;
		for(i=mn;i<n;i++)
		{
			if(ct[i]>1)
			{
				break;
			}
		}
		for(int r=0;r<ct[i];r++)
		{
			for(int j=0;j<i;j++)
			{
				for(int k=0;k<ct[j];k++)
				{
					printf("%d ",arr[j][k]);
				}
				printf("\n");
			}
			if(ct[i]>2)
			{
				printf("%d\n",arr[i][r]);
				for(int j=0;j<ct[i];j++)
				{
					if(j!=r)
					{
						printf("%d ",arr[i][j]);
					}
				
				}
				printf("\n");
			}
			else
			{
				printf("%d\n",arr[i][0]);
				printf("%d\n",arr[i][1]);
				r+=2;
			}
			for(int j=i+1;j<n;j++)
			{
				for(int k=0;k<ct[j];k++)
				{
					printf("%d ",arr[j][k]);
				}
				printf("\n");
			}
			printf("\n");
		}
		mn=i+1;
		x-=ct[i];
	}
	return 0;
}
