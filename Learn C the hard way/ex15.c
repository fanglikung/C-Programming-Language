#include <stdio.h>

int main(int argc, char *argv[])
{
	/*
		// define a interger named as n
		int m=1,n=2;
		// define a pointer to integer named as B
		int *B;
		// 決定是誰（開始）
		B=&m; // pointer to int
		// 決定是誰（結束）
		printf("%p %p\n",B,B+1);
	*/
	/*
		int a[10]={2,3,5,7,11,13,17,19,23,29};
		printf("%p\n",(int*)a);
		int *p=a;
		printf("%d\n",*(5+a));
		printf("%d\n",*(a+5));
		// *(a+b) → a[b]
		printf("%d\n",5[a]);
		printf("%d\n",a[5]);
	*/
	/*
		int a[10]={2,3,5,7,11,13,17,19,23,29};
		printf("%i\n",sizeof a);
		int *p=a;
		printf("%i\n",sizeof p);
	*/
		int a[10];
		int *b,*c;
		a // array of int
		&a // pointer to array of int
		(int*)a // pointer to int
		printf("%p %d\n",b,c);
	return 0;

	//create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[]={
		"Alan","Frank",
		"Mary","John","Lisa"
	};
//	int *A=ages;
// 	int x =100;
//	printf("the first integer is %d \n",A[0]);
//	printf("the first letter of %s is  %d \n ",names[0],names[0][0]);  
//	printf("the second letter of %s is %d \n",names[0],names[0][1]);
//	printf("the third letter of %s is  %d \n ",names[0],names[0][2]);
//	printf("the fourth letter of %s is %d \n",names[0],names[0][3]);
//	printf("the fith  letter of %s is  %d \n	",names[0],names[0][4]);
	//safely get the size of ages

	// create two arrays we care about
//	int ages[]={23,43,12,89,2};
	
	char*name[]={
		"Alan","Frank",
		"Mary","John","Lisa"
	};

	// safely get the size of ages	
	int count = sizeof(ages)/sizeof(int);
	int i = 0;

	//first way using indexing
	for ( i = 0; i < count; i++){
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("---\n");

	// set up the pointers to start of the arrays
	int *cur_age = ages;
	char **cur_name = names;

	//second way using pointers
//	for (i = 0; i < count; i++){
//		printf("%s is %d years old.\n",
//		*(cur_name+i),*(cur_age+i));
//	}
	for (i = count-1; i >=0; i--){
	printf("%s is %d years old.\n",
	*(cur_name+i),*(cur_age+i));
	}
	printf("---\n");
	
	//third way, pointers are just arrays
	for (i = 0; i < count; i++){
		printf("%s is %d years old again. \n", cur_name[i],cur_age[i]);
	}

	printf("---\n");

	//fourth way with pointers in a stupid complex way
	for(cur_name=names+count-1, cur_age=ages+count-1;
		(cur_age - ages)>=0; cur_name--,cur_age--){
	printf("%s lived %d years so far. \n",*cur_name,*cur_age);
	}

	return 0;
}

