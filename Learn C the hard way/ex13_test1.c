#include <stdio.h>
	int main(int argc,char* argv[])
	{	char str[] = "blah";
		printf("sting = %s\n",str);
		char stri[] = {'b','l'};
		int i =0;
		printf("size of char = %ld \n",sizeof(char));
		
		printf("size of stri = %ld \n",sizeof(stri));
		for (i=0;stri[i]!='\0';i++)
			{
				printf("s t r i n g = %c, %d \n",stri[i],i);
		}
		return 0;
	}



	
