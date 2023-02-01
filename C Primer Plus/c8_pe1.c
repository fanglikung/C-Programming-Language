//#include <stdio.h>
//
//int main(void)
//{ 
//	int ch;
//	int chc=0;
//	while ((ch=getchar())!=EOF)
//		chc++;
//	printf("The number of characters %d\n",chc);
//	return 0;
//}




#include <stdio.h>
int main(void)
{
    char ch;
    int ct = 0;
    
    while ((ch = getchar()) != EOF)
        ct++;
    printf("%d characters read\n", ct);
    
    return 0;
}







	 
