#include<stdio.h>
int main()
{
	int n;
	printf("\nnhap n: ");
	scanf("%d",&n);
	float  tong=0;
	for(float i=1;i<=n;i++)
	{
		tong+=1/i;
	}
	printf("\ntong s can tim la: %f",tong);
	return 0;
}
