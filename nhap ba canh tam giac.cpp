#include<stdio.h>
int main()
{
	int a,b,c;
	do
	{
		printf("\nnhap a: ");
		scanf("%d",&a);
		printf("\nnhap b: ");
		scanf("%d",&b);
		printf("\nnhap c: ");
		scanf("%d",&c);
		if(a+b<=c||b+c<=a||c+a<=b)
		{
			printf("\nday khong phai la ba canh cua tam giac");
		}
		
	}while(a+b<=c||b+c<=a||c+a<=b);
	printf("\n ba canh cua tam giac la: %d, %d, %d",a,b,c);
	return 0;
}
