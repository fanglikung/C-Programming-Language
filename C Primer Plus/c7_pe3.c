#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int n;
	float en,ten,avge,on,ton,avgo;
	en=ten=avge=on=ton=avgo=0;
	while((scanf("%d",&n)==1 && n!=0))
	{
		if (n%2==0)
		{
			en+=n;
			ten++;
		}
		else
		{
			on+=n;
			ton++;
		}
	}
	if (ten==0 && ton!=0)
		printf("0,0,%f,%f\n",ton,on/ton);
	else if (ten!=0 && ton!=0)
		printf("%f,%f,%f,%f\n",ten,en/ten,ton,on/ton);
	else
		printf("%f, %f,0,0\n",ten,en/ten);
	return 0;
}
				
			
