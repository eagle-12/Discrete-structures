#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int divi[100];

int main()
{
	int n,k=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			divi[k++]=i;
		}
	}
	/*for(int i=0;i<k;i++)
	{
		printf("%d ",divi[i]);
	}*/
	int fl=0,ct=0;
	//printf("%d",k);
	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(divi[j]%divi[i]==0)
			{
				fl=0;
				for(int x=i+1;x<j;x++)
				{
					if(divi[j]%divi[x]==0 && divi[x]%divi[i]==0)
					{
						fl=-1;
						break;
					}
				}
				if(fl==0)
				{
					//printf("%d %d\n",divi[i],divi[j]);
					ct++;
				}
			}
		}
	}
	printf("%d",ct);
	return 0;
}
