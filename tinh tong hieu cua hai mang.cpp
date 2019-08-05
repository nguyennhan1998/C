#include<stdio.h>
#define max 100
void nhapmang(int a[][max],int &n,int &m)
{
	printf("\nnhap so dong: ");
	scanf("%d",&n);
	printf("\nnhap so cot: ");
	scanf("%d",&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("\na[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
int main()
{
	int a[max][max],n,m;
	int b[max][max],p,k;
	nhapmang(a,n,m);
	nhapmang(b,p,k);
	int tong1=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			tong1+=a[i][j];
		}
	}
	int tong2=0;
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<k;j++)
		{
			tong2+=b[i][j];
		}
	}
	printf("\nhieu hai ma tran la: %d",tong1-tong2);
	printf("\ntong hai ma tran la: %d",tong1+tong2);
	return 0;
}
