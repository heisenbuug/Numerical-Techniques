#include<iostream.h>
#include<math.h>
#include<conio.h>
double func(double x)
{
//double s = cos(x) - x*exp(x);
double s = x*x*x -5*x - 7;
	return s;
}
void root(float a, float b)
{
	float c, t, d;
	int n = 1;
	if(func(a)*func(b) < 0)
	{
		 do{
			c = b - ((func(b)*(b-a))/(func(b)-func(a)));
	       //t = func(a) * func(c);
			a = b;
			b = c;
			n++;
	       //	if(t == 0.0)
		//	break;
			d = b - ((func(b)*(b-a))/(func(b)-func(a)));
		    }while(fabs(d-c) >= 0.0005);
	cout << "Root: " << d << endl;
	cout << "No of iteration: " << n << endl;
	}
	else
	{
		cout << "Check the value of interval";
	}
}
int main ()
{
	clrscr();
	double a,b;
	cout << "Enter values of interval: ";
	cin >> a >> b;
	root(a,b);
	getch();
	return 0;
}
