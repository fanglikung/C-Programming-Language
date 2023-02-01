#include<stdio.h>
#include<ctype.h>

int main(void)
{	int ch;
	int lower=0;
	int upper=0;
	
	while((ch=getchar())!=EOF)
	{
				 if (islower(ch))
					lower++;
				 else if(isupper(ch))
					upper++;
	}
	printf("the number of lower letter = %d and the number of upper letter = %d\n",lower,upper);
	return 0;
} 
					
		
