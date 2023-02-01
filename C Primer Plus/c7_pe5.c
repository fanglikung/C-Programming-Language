#include<stdio.h>
int main(void)
{	int ch,n;
	n=0;
	while((ch=getchar())!='#')
	{
		switch(ch)
		{
			case '.':
			{
				n++;
				printf("!");
				break;	
			}
			case '!':
			{
				n++;
				printf("!!");
				break;
			}

			default:
			{
				printf("%c",ch);
				break;
			}
		}
	}
	printf("The number of exclamation = %d",n);
	return 0;
}
