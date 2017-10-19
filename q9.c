#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	int n,ans=1,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		ans*=x;
	}
	ans-=1;
	if(ans%2==1)
	{
		printf("Uatu");
	}
	else
	{
		printf("Galactus");
	}
	return 0;
}
