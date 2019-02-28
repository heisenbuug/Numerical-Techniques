#include<iostream.h>
#include<math.h>
#include<conio.h>
void main()
{
	clrscr();
	double x[10], y[10], xr, num = 1, den = 1, yr = 0;
	int i, j, n;
	cout << "Enter number of the terms of the table: ";
	cin >> n;
	cout << endl << "Enter the respective values of x and y: " << endl;
	for(i=0; i<n; i++)
	{
		cout << "x" << i << ": ";
		cin >> x[i];
		cout << "y" << i << ": ";
		cin >> y[i];
	}
	cout << endl << "The table entered is as follows: " << endl;
	for(i=0; i<n; i++)
	{
		cout << x[i] << "\t" << y[i];
		cout << endl;
	}
	cout << endl << "Enter the value of the Xr to find the respective value of Yr: ";
	cin >> xr;
	for(i=0; i<n; i++)
	{
		num = 1;
		den = 1;
		for(j=0; j<n; j++)
		{
			if(j!=i)
			{
				num = num * (xr - x[j]);
				den = den * (x[i] - x[j]);
			}
		}
		yr = yr + ((num/den) * y[i]);
	}
	cout << endl << "For Xr = " << xr << endl << "Value of Yr: " << yr << endl;
	float act = sqrt(1.1);
	cout << endl << "Actual value of function: " << act;
	cout << endl << "Accuracy by Lagranges Interpolation: " << act - yr;
	getch();
}
