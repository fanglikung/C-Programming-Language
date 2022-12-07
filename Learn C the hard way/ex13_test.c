#include <stdio.h>
int main(int argc,char* argv[])
{	char str[] = "blachcqwe";
	printf("sting = %s\n",str);
	char st[] = {'b','l','\0'};
	int i =0;
	printf("size of char = %ld \n",sizeof(char));
	
	printf("size of st = %ld \n",sizeof(st));
	for (i=0;st[i]!='\0';i++)
		{
			printf("s t r i n g = %c, %d \n",st[i],st[i]);
	}
	printf("b = %c \n",98);
	return 0;
}


	
