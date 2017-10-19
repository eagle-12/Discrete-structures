#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int n,ans=0;

int bit[1000][1000];


void bits(int x)
{
	int ele=x;
	for(int i=0;i<n;i++)
	{
		bit[x][i]=0;
	}
	int ct=0;
	while(ct<n)
	{
		bit[ele][n-1-ct]=x%2;
		if(bit[ele][n-1-ct]==0)
		{
			ans++;
		}
		x/=2;
		ct++;
	}
}

int main()
{
	long long int ans1=0;
	scanf("%d",&n);
	int num = pow(2.0,n);
	ans1 = n*pow(2.0,n-1);
	printf("%lld",ans1);
	//printf("%d\n",num);
	/*for(int i=0;i<num;i++)
	{
		bits(i);
	}
	printf("%d",ans);*/
	return 0;
}
