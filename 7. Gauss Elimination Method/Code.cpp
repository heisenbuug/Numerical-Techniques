#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	clrscr();
	int i,j,k,n;
	float a[10][10],x[10],b[10];
	float s,p;
	printf("Enter the number of equations :");
	scanf("%d",&n);
	printf("Enter the coefficient of the equation:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("a[%d][%d]=",i+1,j+1);
		scanf("%f",&a[i][j]);
		}
		printf("b[%d] = ",i+1);
		scanf("%f",&a[i][n]);
	}
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
	       printf("\n The result is :\n");
		for(i=0;i<n;i++)
		printf("\n x[%d] =%f",i+1,x[i]);
		return 0;
	}
