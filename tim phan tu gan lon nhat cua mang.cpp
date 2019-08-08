#include<stdio.h>
int nhap_mang(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]",i);
		scanf("%d",&a[i]);
	}
}
void xuat_mang(int a[],int n)
{
	for(int  i=0;i<n;i++)
	printf("%5d",a[i]);
}
int tim_max(int a[],int n)
{
	int max=a[0];
	int max1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	if(max==a[0])
		{
			max1=a[1];
		}else
		{
		max1=a[0];
	}
		for(int i=0;i<n;i++)
		{
		if(a[i]>max1&&a[i]<max)
		{
			max1=a[i];
		}
	}
	return max1;
}
int main()
{
	int n;
	printf("\nnhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	nhap_mang(a,n);
	printf("\nmang ban vua nhap la:\n");
	xuat_mang(a,n);
	printf("\nphan tu gan lon nhat cua mang la: %d",tim_max(a,n));
	return 0;
}
