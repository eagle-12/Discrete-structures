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
	for(int j=0;j<k;j++)
	{
		scanf("%d %d",&x,&y);
		arr[x][y]=1;
		for(int a=0;a<n;a++)
		{
			if(arr[y][a]==1)
			{
				arr[x][a]=1;
			}
			if(arr[a][x]==1)
			{
				arr[a][y]=1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i][i]==0)
		{
			printf("Ireflexive");
			//printf("%d",i);
			return 0;
		}
	}
	printf("Reflexive");
	return 0;
}
