#include<stdio.h>

int main (void)
{
	int i,j,ch;
	int true;
	int end;
	int t1,test;
	printf("Enter a positive integer or q to quit.\n");
	
	while((test=scanf("%d",&ch))==1 || ch!='q')
	{	true=1;
		if (test!=1)
		{	
			t1=getchar();
			if (t1=='q')
				break;
			printf("%c is not a positive integer.\n",t1);
			printf("Enter a positive integer or q to quit.\n");
			continue;
		}
		if (getchar()!='\n')
			continue;
		if (ch>1)
		{	printf("the following is all prime number of %d\n",ch); 
			
			for (i=2;i<=ch;i++)
			{
				for (j=2;j<=i;j++)
				{
					if (i%j==0 && i!=j)
						true=0;
				}
				if (true)	
					printf("%d ",i);
				true=1;
			}
			printf("\n");
			printf("Enter a positive integer or q to quit.\n");
		}
		else if (ch>=0)
		{	
			printf("%d has no prime.\n",ch);
			printf("Enter a positive integer or q to quit.\n");
		}
		else
		{	printf("%d is not a positive integer.\n",ch);
			printf("Enter a positive integer or q to quit.\n");
		}
	}
	return 0;
}
	
