/* Programming Exercise 8-8 */

// Write a program that shows you a menu offering you the choice of addition, subtraction,
// multiplication, or division. After getting your choice, the program asks for two numbers,
// then performs the requested operations. The program should accept only the offered
// menu choices. It should use type float for the numbers and allow the user to try again
// if he or she fails to enter a number. In the case of division, the program should prompt
// the user to enter a new value if 0 is entered as the value for the second number. A typical
// program run should look like this:

// Enter the operation of your choice:
// a. add           s. subtract
// m. multiply      d. divide
// q. quit
// a
// Enter first number: 22.4
// Enter second number: one
// one is not an number.
// Please enter a number, such as 2.5, -1.78E8, or 3: 1
// 22.4 + 1 = 23.4
// Enter the operation of your choice:
// a. add           s. subtract
// m. multiply      d. divide
// q. quit
// d
// Enter first number: 18.4
// Enter second number: 0
// Enter a number other than 0: 0.2
// 18.4 / 0.2 = 92
// Enter the operation of your choice:
// a. add           s. subtract
// m. multiply      d. divide
// q. quit
// q
// Bye.

#include<stdio.h>
void menu(void);
float get_number();

int main(void)
{
	int operation;
	float n1,n2;
	menu();
	while((operation=getchar())!='q')
	{	
		while(getchar()!='\n')
			;
		if(operation!='a' && operation!='s' && operation!='m' && operation!='d')
			{
				printf("Please enter a, s, m, or d\n");
				continue;
			}	
		printf("Enter first number:");
		n1=get_number();
		printf("Enter second number:");
		while((n2=get_number())==0 && operation=='d')
				printf("Enter a number other than 0:");
		
		switch(operation)
		{
			case 'a':
				printf("%g + %g = %g",n1,n2,n1+n2);
				break;
			case 's':
				printf("%g - %g = %g",n1,n2,n1-n2);
				break;
			case 'm':
				printf("%g * %g = %g",n1,n2,n1*n2);
				break;
			case 'd':
				printf("%g / %g = %g", n1,n2,n1/n2);
				break;
		}
	}
	printf("Bye.");
	return 0;
}

void menu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add 		s.subtract\n");
	printf("m. multiply	d.divide\n");
	printf("q. quit\n");
	
}

float get_number()
{
	float num;
	float ch;
	while(scanf("%g",&num)!=1)
		{
			while((ch=getchar())!='\n')
				putchar(ch);
				printf(" is not an number.\n");
				printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
		}
	return num;
}
			

