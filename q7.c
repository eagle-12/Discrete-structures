#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int gcd(int a, int b)
{ 
    if (a == 0 || b == 0)
    {
       return 0;
    }
    if (a == b)
    {
        return a;
    }
    if (a > b)
    {
        return gcd(a-b, b);
    }
    return gcd(a, b-a);
}

int main()
{
	int p,q;
	scanf("%d %d",&p,&q);
	int rank=0;
	int num=1,den=1;
	int op=0;
	int fl=0;
	while(num!=p || den!=q)
	{
		if(gcd(num,den)==1)
		{
			rank++;
			//printf("%d %d\n",num,den);
		}
		if(num==1 && fl==0)
		{
			den++;
			op=0;
			fl=-1;
		}
		else if(den==1 && fl==0)
		{
			num++;
			op=1;
			fl=-1;
		}
		else
		{
			if(op==0)
			{
				den--;
				num++;
				fl=0;
			}
			else
			{
				num--;
				den++;
				fl=0;
			}
		}
	}
	rank++;
	printf("%d\n",rank);
	return 0;
}
