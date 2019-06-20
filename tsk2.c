#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("Enter Marks of 3 subj");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d=a+b+c;
	e=(a+b+c)/2;
	printf("Sum:%d \n Avg:%d",d,e);
}
