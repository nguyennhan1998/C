#include<stdio.h>
void nhap_mang(int a[],int &n)
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
		printf("%5d",a[i]);
	}
}
void sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j+1]<a[j])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n;
	printf("\nnhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	nhap_mang(a,n);
	printf("\n------mang vua nhap la-------\n");
	xuat_mang(a,n);
	sort(a,n);
	printf("\n------mang sau khi sap xep la------\n");
	xuat_mang(a,n);
	return 0;
}
