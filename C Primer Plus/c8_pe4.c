#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int ch;
	int count_each=0;
	int count_word=0;
	float avg=0;
	while ((ch=getchar())!=EOF)
	{
		if (!isspace(ch) )  
			{
				if(!ispunct(ch))
					count_each++;
			}
		else
				count_word++;
			
	}
	avg=(float)count_each/count_word;
	printf("avg=%f and each= %d and word=%d\n",avg,count_each,count_word);
	return 0;
}
