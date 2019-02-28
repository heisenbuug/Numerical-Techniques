#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	float tv, ap, n;
	float ae, re, pre, rv;
	printf("Enter True Value: ");
	scanf("%f",&tv);
	printf("Enter approx. value: ");
	scanf("%f",&ap);
	ae = fabs(tv - ap);
	re = ae / fabs(tv);
	pre = re * 100;
	printf("\n\nAbsolute Error: %f",ae);
	printf("\nRelative Error: %f",re);
	printf("\nPercentage Relative Error: %f",pre);
	printf("\n\nEnter any number upto any decimal places: ");
	scanf("%f",&n);
	printf("Rounded off Value: %1.4f", n);
	getch();

}
