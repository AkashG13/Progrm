#include<stdio.h>
main()
{
	char a[10],b[10];
	printf("enter first name:");
	scanf("%s",&a);
	printf("enter last name:");
	scanf("%s",&b);
	char c[10];
	strcat(a,b);
	printf("Full name: %s",a);
	
}
