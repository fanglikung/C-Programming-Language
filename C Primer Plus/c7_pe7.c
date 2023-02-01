#include<stdio.h>
#define basic 10
#define overtime_t 40 
#define overtime_m 1.5
#define tax300 0.15
#define tax450 0.2
#define tax451 0.25
#define tax15 300
#define tax20 450
#define tax25 450

float gross_net(float hours);
float tax(float gross_net);
int main(void)
{
	float hours,gn,t,net_pay;
	printf("please enter the hours worked in a week.\n");	
	while(scanf("%f",&hours)!=1)
		{	while (getchar()=='\n')
				continue;
			printf("please enter the hours worked in a week.\n");	
		}	
	gn=gross_net(hours);
	t=tax(gn);
	net_pay=gn-t;
	printf("gross_net=%f, taxes=%f, net_pay=%f",gn,t,net_pay);
	return 0;
}
	
float gross_net(float hours)
{
	float total;
	if (hours>overtime_t)
		total=hours*basic+(hours-overtime_t)*basic*overtime_m;
	else
		total=hours*basic;
	return total;
}

float tax(float gross_net)
{
	float taxes;
	if (gross_net<=tax15)
		taxes=gross_net*tax300;
	else if( gross_net>tax15 && gross_net<=tax20)
		taxes=(tax15)*tax300+(gross_net-tax15)*tax450;
	else
		taxes=(tax15)*tax300+(tax20)*tax450+(gross_net-tax20)*tax451;
	return taxes;
}
