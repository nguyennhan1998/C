#include<stdio.h>
int main()
{
	int n;
	printf("\nnhap n: ");
	scanf("%d",&n);
	int giaithua=1;
	for(int i=1;i<=n;i++)
	{
		giaithua*=i;
	}
	printf("\ngiai thua cua %d la %d",n,giaithua);
	return 0;
}
