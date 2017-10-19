#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int arr[10000];

int k,n;

int cycle(int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[x]==k)
		{
			return 1;
		}
		else
		{
			x=arr[x];
		}
	}
	return 0;
}

int main()
{
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		arr[i]=(i+arr[i])%n;
	}
	int ct=0;
	for(int i=0;i<n;i++)
	{
		k=i;
		ct+=cycle(i);
	}
	printf("%d\n",ct);
}
