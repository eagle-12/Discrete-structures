#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int num=m;
	for(int i=1;i<n;i++)
	{
		num=((num%10)*(m%10))%10;
	}
	printf("%d",num);
	return 0;
}
