#include<iostream.h>
#include<conio.h>
double func(double x)
{
	return x*x*x - 5*x + 3;
}
double dfunc(double x)
{
	return 3*x*x - 5;
}
double ddfunc(double x)
{
	return 6*x;
}
void root(int n, double a)
{
	int i;
	double b;
	if(dfunc(a ==0) && func(a)*ddfunc(a)<0)
	{
		cout << "INVALID";
	}
	else
	for(i=1; i<=n; i++)
	{
		b = a - (func(a)/dfunc(a));
		a = b;
		if(i<n)
		{
			cout << "Root at "<< i << " iteration: " << b << endl;
		}
		else
		{
			cout <<  "Value of root is: " << b << endl;
		}
	}

}

int main()
{
	clrscr();
	int n;
	double a;
	cout << "Enter initial value: ";
	cin >> a;
	cout << "Total Iteration:";
	cin >> n;
	root(n,a);
	getch();
	return 0;
}
