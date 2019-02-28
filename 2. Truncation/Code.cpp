#include<iostream.h>
#include<math.h>
#include<conio.h>
long int fact(int n);
int main()
{
	clrscr();
	int n, i, a;
	float actualv, error, b=0, b1=0;
	cout << "Enter no. of the terms of the series: ";
	cin >> n;
	cout << "Enter for actual value: ";
	cin >> a;
	for(i=0; i<=n-1; i++)
	{
		b=((float)pow(a,i)/(float)fact(i));
		b1 = b1 + b;
	}
	cout << "Sum: " << b1 << endl;
	actualv = exp(a);
	error = actualv - b1;
	cout << "Actual Error: " << actualv << endl;
	cout << "Error: " << error << endl;

	getch();
}
long int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		n = n*fact(n-1);
		return(n);
	}
}
