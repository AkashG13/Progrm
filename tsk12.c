#include<stdio.h>
int main()
{
	int i=0;float a,b,c;
	printf(" 1. CELCIUS TO FAHRENHEIT\n 2. FAHRENHEIT TO CELCIUS\n 3. EXIT");
	scanf("%d",&i);
	switch(i)
	{
	case 1:
		printf("Enter Temp in Celcius: ");
		scanf("%f",&a);
		c=((a*1.8)+32);
		printf("Temp in F: %f",&c);
		break;
	case 2:
		printf("Enter Temp in Fahrenheit: ");
		scanf("%f",&a);
        c=((a-32)*0.55);
		printf("Temp in C: %f",&c);
		break;
	case 3:
	     exit(0);	
	default:
	printf("Wrong Entry");	
	}
	return 0;
}
