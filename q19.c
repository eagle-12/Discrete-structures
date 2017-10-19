#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int b[1000]={0};

int bits(int x)
{
	int i=0;
	while(x!=0)
	{
		b[i++]=(x%2);
		x/=2;
	}
	return i;
}

int main()
{
	int n;
	scanf("%d",&n);
	int x=bits(n);
	int ones=0,zeros=0;
	for(int i=0;i<x;i++)
	{
		if(b[i]==0)
		{
			zeros++;
		}
		else
		{
			ones++;
		}
	}
	if(zeros==ones)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
