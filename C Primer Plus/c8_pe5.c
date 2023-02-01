/* Programming Exercise 8-5 */
/* binaryguess.c -- an improved number-guesser */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int high = 100;
  int low = 1;
  int guess = (high + low) / 2;
  char response;

  printf("Pick an integer from 1 to 100. I will try to guess ");
  printf("it.\nRespond with a y if my guess is right, with");
  printf("\na h if it is high, and with an l if it is low.\n");
  printf("Uh...is your number %d?\n", guess);
  while ((response = getchar()) != 'y')       /* get response */
  {
      if (response == '\n')
          continue;
      if (response != 'h' && response != 'l')
      {
           printf("I don't understand that response. Please enter h for\n");
           printf("high, l for low, or y for correct.\n");
           continue;
       }
    
      if (response == 'h')
          high = guess - 1;
      else if (response == 'l')
          low = guess + 1;
      guess = (high + low) / 2;
    printf("Well, then, is it %d?\n", guess);
  }
  printf("I knew I could do it!\n");
  return 0;
}
//#include<stdio.h>
//int main(void)
//{
//	int ch;
//	int number=50;
//	printf("I guess the number is 50?\n");	
//	printf("if so, enter (c)orrect. if not enter (h)igh or (l)ow\n");
//	while ((ch=getchar())!='c' )
//		{
//			if (ch=='h')
//			{	number=(number/2);
//			printf("I guess the number is %d?\n",number);	
//			printf("if so, enter (c)orrect. if not enter (h)igh or (l)ow\n");
//			}
//			else if(ch=='l')
//			{	number=(number+100)/2;
//				printf("I guess the number is %d?\n",number);	
//				printf("if so, enter (c)orrect. if not enter (h)igh or (l)ow\n");
//			}
//			else if(ch=='\n')
//				continue;
//		}
//	printf("The number you choose is %d",number);
//	return 0;
//}
//		
