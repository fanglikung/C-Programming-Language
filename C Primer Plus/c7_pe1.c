#include<stdio.h>
#include<ctype.h>

int main(void)
{
	int ch,sp,nc,alc;
	sp=nc=alc=0;
	while((ch=getchar())!='#')
	{
		if(ch==' ')
			sp++;
		else if(ch=='\n')
			nc++;
		else if(isalpha(ch))
			alc++;
	}
	printf("The number of spaces is %d\n",sp);
	printf("The number of newline characters is %d\n",nc);
	printf("The number od all other characters is %d\n",alc);
	return 0;
}
		
