#include<stdio.h>
int tim_max(int a[],int n)
{
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
void nhap_mang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]",i);
		scanf("%d",&a[i]);
	}
}
int main()
{
	int n;
	printf("\nnhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	nhap_mang(a,n);
	printf("\ngia tri lon nhat cua mang la: %d",tim_max(a,n));
	return 0;
	
}
