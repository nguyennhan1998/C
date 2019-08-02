#include<stdio.h>
int main()
{
	int n;
	printf("\nnhap so phan tu mang la: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]",i);
		scanf("%d",&a[i]);
	}
	int tong=0;
	for(int i=0;i<n;i++)
	{
		tong+=a[i];
	}
	float tbc=(float)tong/n;
	printf("\nso trung binh cong cua mang la: %f",tbc);
	return 0;
}
