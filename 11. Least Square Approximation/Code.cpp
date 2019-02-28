#include<iostream.h>
#include<math.h>
#include<conio.h>
//using namespace std;
void main()
{
	clrscr();
	int n,i,x[10],y[10],sx=0,sy=0,sxy=0,sx2=0,sx3=0,sx4=0,sx2y=0;
	int a[10],b[10];
	cout << "Enter the number of terms: ";
	cin >> n;
	cout << "\nEnter the values of x:" << endl;
	for(i=0;i<=n-1;i++)
	{
		cin >> x[i];
	}
	cout << "\nEnter the values of y:" << endl;
	for(i=0;i<=n-1;i++)
	{
		cin >> y[i];
	}
	for(i=0;i<=n-1;i++)
	{
		sx = sx + x[i];
		sx2 = sx2 + x[i] * x[i];
		sx3 = sx3 + x[i] * x[i] * x[i];
		sx4 = sx4 + x[i] * x[i] * x[i] * x[i];				
		sy = sy + y[i];
		sxy = sxy + x[i] * y[i];
		sx2y = sx2y + x[i] * x[i] * y[i];
	}
	a[1][1] = n;
	a[1][2] = sx;
	a[1][3] = sx2;
	a[2][1] = sx;
	a[2][2] = sx2;
	a[2][3] = sx3;
	a[3][1] = sx2;
	a[3][2] = sx3;
	a[3][3] = sx4;
	b[1]  = sy;
	b[2] = sxy;
	b[3] = sx2y;
for(k=0;k<n-1;k++)
		{
		for(i=k+1;i<n;i++)
		{
		p=a[i][k]/a[k][k];
		for(j=k;j<n+1;j++)
		a[i][j]=a[i][j]-p*a[k][j];
		}
		}
		b[n-1]=a[n-1][n]/a[n-1][n-1];
		for(i=n-2;i>=0;i--)
		{
		s=0;
		for(j=i+1;j<n;j++)
		{
		s+=(a[i][j]*b[j]);
		b[i]=(a[i][n]-s)/a[i][i];
		}
		}
	for(i=0;i<n;i++)
		cout << i+1 << x[i];
	//cout << endl << "The equation of line is \nY=" << a << " + " << b << "X";
    //	return(0);
	getch();
}


