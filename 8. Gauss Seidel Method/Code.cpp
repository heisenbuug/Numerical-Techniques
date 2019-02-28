#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int i,j,m=0;
	float a[4][4];
	float  b[4];
	double x[4],y[4];
	cout<<"Enter the value for Equation ";
	cout<<"\n";
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<"Enter the value of a("<<i<<j<<") : ";
			cin>>a[i][j];
		}
	}
	cout<<"\nEnter the value to the right side of the equation \n";
	for(i=0;i<4;i++)
	{
		cout<<"Enter the value no ("<<i<<","<<j<<") : ";
		cin>>b[i];
	}
	cout<<"\n";
	cout<<"Enter the initial value of x \n";
	for(i=0;i<4;i++)
	{
		cout<<"Enter the value no x("<<i<<") : ";
		cin>>x[i];
	}
	cout<<"\nEnter the no of iteration : ";
	cin>>m;
	while(m>0)
	{
		for(i=0;i<4;i++)
		{
			y[i] = (b[i]/a[i][i]);
			for(j=0;j<4;j++)
			{

				if(j==i)
				continue;
				y[i]=y[i]-((a[i][j]/a[i][i])*x[j]);
				x[i]=y[i];
			}
			cout<<"x"<<i+1<<"="<<y[i]<<" ";
		}
		cout<<"\n";
		m--;
		}
		return 0;

	}
