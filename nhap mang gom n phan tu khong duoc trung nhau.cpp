#include<stdio.h>
void xetmang(int *a,int i)
{
	for(int j=0;j<i;j++)
	{
		while(*(a+i)==a[j])
		{
			printf("\nnhap lai a[%d]: ",i);
			scanf("%d",&a[i]);
			xetmang(a,i);
		}
	}
}
int main()
{
	int n;
	printf("\nnhap so phan tu cua mang: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("\nnhap a[%d]: ",i);
		scanf("%d",&a[i]);
		xetmang(a,i);
	}
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
