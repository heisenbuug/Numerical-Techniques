#include<iostream>
using namespace std;

float r_cal(float r, int n)
{
    float temp = r;
    for (int i = 1; i < n; i++)
        temp = temp * (r + i);
    return temp;
}
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
	double y[20][20], x[20];
	int i, j, k, n;
	cout << "BACKWARD DIFFERENCE" << endl;
	cout << "The form of equation is y = f(x)" << endl;
	cout << "Enter number of entries: ";
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cout << "x" << i << ": ";
		cin >> x[i];
		cout << "y" << i << ": ";
		cin >> y[i][0];
	}
	k = 0;
	for(j = 1; j < n; j++)
	{
		k++;
		for(i = n-1; i >= k; i--)
		{
			y[i][j] = y[i][j-1] - y[i-1][j-1];
		}
	}
	k = n;
	cout << endl << "The backward difference table is" << endl;
	cout << endl << "\tx\ty\tDy\tD2y\tD3y\tD4y\tD5y\tD6y" << endl;
	for(i = 0; i < n; i++)
	{
		cout << endl << "x" << i << ": " << x[i];
		for(j = 0; j < i+1; j++)
		{
			cout << "\t" << y[i][j];
		}
		cout << endl;
	}

	double value;
	cout << "Value of Xr: ";
	cin >> value;

    float sum = y[n-1][0];
    float r = (value - x[n-1]) / (x[1] - x[0]);
    for (int i = 1; i < n; i++)
    {
        sum = sum + (r_cal(r, i) * y[n-1][i]) / fact(i);
    }

    cout << "\nValue at " << value << " is " << sum << endl;

	return 0;
}

/*
float r_cal(float r, int n)
{
    float temp = r;
    for (int i = 1; i < n; i++)
        temp = temp * (r - i);
    return temp;
}
int fact(int n)
{
    int f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

int main()
{
	double y[20][20], x[20];
	int i, j, k, n;
	cout << "FORWARD DIFFERENCE" << endl;
	cout << "The form of equation is y = f(x)" << endl;
	cout << "Enter number of entries: ";
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cout << "x" << i << ": ";
		cin >> x[i];
		cout << "y" << i << ": ";
		cin >> y[i][0];
	}
	k = n;
	for(j = 1; j < n; j++)
	{
		k = k - 1;
		for(i = 0; i < k; i++)
		{
			y[i][j] = y[i+1][j-1] - y[i][j-1];
		}
	}
	k = n;
	cout << endl << "The forward difference table is" << endl;
	cout << endl << "\tx\ty\tDy\tD2y\tD3y\tD4y\tD5y\tD6y" << endl;
	for(i = 0; i < n; i++)
	{
		cout << endl << "x" << i << ": " << x[i];
		for(j = 0; j < k; j++)
		{
			cout << "\t" << y[i][j];
		}
		k = k - 1;
		cout << endl;
	}

	double value;
	cout << "Value of Xr: ";
	cin >> value;

    float sum = y[0][0];
    float r = (value - x[0]) / (x[1] - x[0]);
    for (int i = 1; i < n; i++)
    {
        sum = sum + (r_cal(r, i) * y[0][i]) / fact(i);
    }

    cout << "\nValue at " << value << " is " << sum << endl;

	return 0;
}
*/
