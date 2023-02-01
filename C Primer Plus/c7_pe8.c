#include<stdio.h>
#define overtime_t 40
#define overtime_m 1.5
#define tax15 300
#define tax20 450
#define tax300 0.15
#define tax450 0.2
#define taxrest 0.25

float gross_net(float hours,float basic);
float taxes(float gross_net);
int menu(void);

int main(void)
{
	float basic,hours;
	int ch;
	float total,tax,net_pay;
	printf("Please enter 1 through 5 from the following menu.\n");
	menu();
	while ((ch=getchar())!='5')
	{	
		if (getchar()!='\n')
			continue;
		if(ch!='1' && ch!='2' && ch!='3' && ch!='4')
		{
			printf("Please enter 1 through 5 from the following menu.\n");
			menu();
			continue;
		}
		switch(ch)
		{
			case '1':
			{
				basic=8.75;
				break;
			}
			case '2':
			{
				basic=9.33;
				break;
			}
			case '3':
			{
				basic=10.00;
				break;
			}
			case '4':
			{
				basic=11.20;
				break;
			}
		}
					
		printf("Please enter the worked hours.\n");
	
		while (scanf("%f",&hours)!=1 )
		{   
			printf("Please enter the worked hours.\n");
		
			if(getchar()!='\n')
				continue;
		}
		if(getchar()!='\n')
			continue;
		total=gross_net(hours,basic);
		tax=taxes(total);
		net_pay=total-tax;
		printf("gross_net=%f, taxes=%f, net_pay=%f\n\n\n",total,tax,net_pay);
		
		printf("Please enter 1 through 5 from the following menu.\n");
		menu();
	}
	return 0;
}


int menu(void)
{
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr						2) $9.33/hr\n");
	printf("3) $10.00/hr						4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
	return 0;
}

float gross_net(float hours,float basic)
{
	float t;
	if (hours<=overtime_t)
		t=basic*hours;
	else
		t=basic*(hours-overtime_t)*overtime_m+basic*overtime_t;
	return t;
}
float taxes(float gross_net)
{	
	float t;
	if (gross_net<=tax15)
		t=gross_net*tax300;
	else if (gross_net>tax15 && gross_net<=tax20)
		t=tax15*tax300+tax450*(gross_net-tax15);
	else
		t=tax15*tax300+tax450*tax20+(gross_net-tax20)*taxrest;
	return t;
}
