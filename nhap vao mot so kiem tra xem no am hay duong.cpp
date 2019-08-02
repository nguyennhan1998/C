#include<stdio.h>
int main()
{
	int a;
	printf("\nnhap a: ");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\n%d la so duong",a);
	}else if(a==0)
	{
		printf("\n%d la so khong duong , khong am",a);
	}else
	printf("\n%d la so am",a);
	return 0;
}
