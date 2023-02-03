#include<stdio.h>

int main (void)
{
	int i,j,ch;
	int true;
	int t1;
	while(1)
	{	
		printf("Enter a positive integer or q to quit.\n");
		if (scanf("%d",&ch)!=1)
		{	
			if ((t1=getchar())=='q')
				break;
			printf("%c is not a positive integer.\n",t1);
			continue;
		}
		if (getchar()!='\n')
			continue;
		if (ch>1)
		{	printf("the following is all prime number of %d\n",ch); 
			
			for (i=2;i<=ch;i++)
			{	true=1;
				for (j=2;j<=i;j++)
				{
					if (i%j==0 && i!=j)
						true=0;
				}
				if (true)	
					printf("%d ",i);
			}
			printf("\n");
		}
		else if (ch==1)
			printf("%d has no prime.\n",ch);
		else
			printf("%d is not a positive integer.\n",ch);
	}
	return 0;
}
	
