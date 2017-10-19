#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int max(int x,int y)
{
	return (x>y)?x:y;
}

int siz;
int b[1000];

void bits(int n)
{
	for(int i=0;i<siz;i++)
	{
		b[i]=0;
	}
	int ct=0;
	while(ct<siz)
	{
		b[siz-1-ct]=n%2;
		n/=2;
		ct++;
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][1000];
	int ct[n];
	int k;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k);
		ct[i]=k;
		for(int j=0;j<k;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	//printf("%d %d %d",arr[0][0],arr[0][1],arr[0][2]);
	int proc=0,num;
	while(proc<n)
	{
		if(ct[proc]>1)
		{
				
			num=pow(2,ct[proc]);
			siz=ct[proc];
			int ct1=0;
			//printf("%d %d",num,siz);
			for(int x=1;x<num/2;x++)
			{
				bits(x);
				for(int i=0;i<proc;i++)
				{
					for(int j=0;j<ct[i];j++)
					{
						printf("%d ",arr[i][j]);
					}
					printf("\n");
				}
				for(int i=0;i<siz;i++)
				{
					if(b[i]==1)
					{
						printf("%d ",arr[proc][i]);
					}
				}
				printf("\n");
				for(int i=0;i<siz;i++)
				{
					if(b[i]==0)
					{
						printf("%d ",arr[proc][i]);
					}
				}
				printf("\n");
				for(int i=proc+1;i<n;i++)
				{
					for(int j=0;j<ct[i];j++)
					{
						printf("%d ",arr[i][j]);
					}
					printf("\n");
				}	
				
			}
				
		}
		proc++;
	}
	return 0;
}
