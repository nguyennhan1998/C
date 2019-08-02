#include<stdio.h>
int main()
{
	int n;
	printf("\nso phan tu cua mang la: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("\nnhap a[%d]",i);
		scanf("%d",&a[i]);
	}
	int tong=0;
	for(int i=0;i<n;i++)
	{
		tong+=a[i];
	}
	printf("\ntrung binh cong cua mang la: %.1f",(float)tong/n);
	return 0;
}
