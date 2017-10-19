#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	int n,x;
	scanf("%d",&n);
	int ct=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x!=0 && x!=1)
		{
			ct++;
		}
	}
	if(ct<=1)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
