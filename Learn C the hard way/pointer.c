*/
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
*/
