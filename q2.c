#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int count(int x,int m)
{
	int ans=0,fl=0;;
	int par[x];
	int k=0;
	par[k]=x;
	while(1)
	{
		for(int i=0;i<=k;i++)
		{
			if(par[i]<m)
			{
				fl=-1;
				break;
			}
		}
		if(fl==0)
		{
			ans++;
		}
		fl=0;
		int x=0;
		while(k>=0 && par[k]==1)
		{
			x+=par[k];
			k--;
		}
		if(k<0)
		{
			return ans;
		}
		par[k]--;
		x++;
		while(x>par[k])
		{
			par[k+1]=par[k];
			x-=par[k];
			k++;
		}
		par[k+1]=x;
		k++;
	}
	return ans;
}

int main()
{
	int e,m;
	scanf("%d %d",&e,&m);
	int ct=0;
	ct=count(e,m);
	printf("%d",ct);
}
