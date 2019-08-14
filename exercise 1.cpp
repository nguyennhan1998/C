#include<stdio.h>
int sum(int a,int b)
{
	int tong=a+b;
	return tong;
}
int sub(int a,int b)
{
	int hieu=a-b;
	return hieu;
}
int multiplication(int a,int b)
{
	int tich=a*b;
	return tich;
}
float division(int a,int b)
{
	float thuong=(float)a/b;
	return thuong;
}
int main()
{
	int a,b;
	printf("\nnhap a: ");
	scanf("%d",&a);
	printf("\nnhap b: ");
	scanf("%d",&b);
	printf("\ntong cua hai so la: %d",sum(a,b));
	printf("\nhieu cua hai so la: %d",sub(a,b));
	printf("\ntich cua hai so la: %d",multiplication(a,b));
	printf("\nthuong cua hai so la: %f",division(a,b));
	return 0;
}
