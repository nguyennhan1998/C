#include<stdio.h>
int main()
{
	int n;
	printf("\nnhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nmang ban vua nhap la:");
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
