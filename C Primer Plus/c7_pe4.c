#include<stdio.h>
int main(void)
{	int ch,n;
	n=0;
	while((ch=getchar())!='#')
	{
		if (ch=='.')
		{
			n++;
			printf("!");	
		}
		else if(ch=='!')
		{
			n++;
			printf("!!");
		}
		else
			printf("%c",ch);
	}
	printf("The number of exclamation = %d",n);
	return 0;
}
