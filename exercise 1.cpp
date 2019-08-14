#include<stdio.h>
int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int multiplication(int a,int b)
{

	return a*b;
}
float division(int a,int b)
{
	return (float)a/b;
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
