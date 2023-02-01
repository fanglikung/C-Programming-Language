#include<stdio.h>

int main(void)
{
	int ch;
	while ((ch=getchar())!=EOF)
		if ( ch!=' ')
	{		if (ch=='\n')
				printf("ASCII = \\n and ASCII value = %d\n",ch);
			else if (ch=='\t')
				printf("ASCII = \\t and ASCII value = %d\n",ch);
			else
				printf("ASCII =^%c and ASCII value = %d\n",ch,64+ch);
	}
	return 0;
} 
		
