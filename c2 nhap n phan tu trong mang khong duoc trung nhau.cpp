#include<stdio.h>
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
		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				i--;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	return 0;
}
