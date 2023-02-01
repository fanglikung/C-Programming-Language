#include<stdio.h>
#include<ctype.h>
int main(void)
{	int ch,n,se,ei;
	n=se=0;
	while((ch=getchar())!='#')
	{	
		ch=tolower(ch);
		se++;
		if (ch=='e')
			ei=se;
		else if (ch=='i')
			if (se-ei==1)
				n++;	
		printf("%c",ch);
	}
	printf("The number of ei = %d",n);
	return 0;
}
