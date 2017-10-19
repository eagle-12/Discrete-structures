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
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=0;
		}
	}
	int k,x,y;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
		scanf("%d %d",&x,&y);
		arr[x][y]=1;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i][i]==0)
		{
			printf("No");
			return 0;
		}
		for(int j=0;j<i;j++)
		{
			if(arr[i][j]==1)
			{
				if(arr[j][i]==1)
				{
					printf("No");
					return 0;
				}
				for(int x=0;x<n;x++)
				{
					if(arr[j][x]==1)
					{
						if(arr[i][x]==0)
						{
							printf("No");
							return 0;
						}
					}
				}
			}
		}
	}
	printf("Yes");
	return 0;
}
