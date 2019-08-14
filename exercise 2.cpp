#include<stdio.h>
void nhap_mang(int a[],int& n)
{
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]",i);
		scanf("%d",&a[i]);
	}
}
void xuat_mang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
}
void sap_xep(int a[],int n,int b[],int& m)
{
	int i,j;
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		b[j]=a[i];
	}
}
int main()
{
	int n;
	printf("\nnhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	nhap_mang(a,n);
	int b[n];
	printf("\nmang ban vua nhap la: ");
	xuat_mang(a,n);
	sap_xep(a,n,b,n);
	printf("\nmang sau khi sap xep la: ");
	xuat_mang(b,n);
	return 0;
}
