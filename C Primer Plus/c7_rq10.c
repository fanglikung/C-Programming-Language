#include<stdio.h>

int main(void)
{
	char ch;
	
	while((ch=getchar())!='#')
	{
//		printf("ch=");
//		putchar(ch);
//		printf("\n");
		if( ch!='\n')
		{	
			printf("Step 1\n");
			if (ch!='c')
			{				
				if(ch=='b')
					break;
				else if (ch=='g')
					printf("Step 3\n");
				printf("Step 2\n");
			}
		}
	}
	printf("Done\n");
	return 0;
}
