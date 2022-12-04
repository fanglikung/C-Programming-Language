#include <stdio.h>

int main(int argc, char *argv[])
{
//	int i = 25;
//	while(i >=0 ){
//		printf("%d",i);
//		printf(i);
//	    i--;
	int i = 0;
	for (i = 0;i<argc;i++){
	printf("argc = %s \n", argv[i]);
	}
	
	int k = 0;
	for (k = 0; k <4;k++){
		if (k==0){
			printf("state %d : California \n",k);}
		else if (k==1){
			printf("state %d : Oregon \n",k);}
		if (k==2){
			printf("state %d : Washington \n",k);}
		if (k==3){
			printf("state %d : Texas \n",k);}
	}
	return 0;
}
