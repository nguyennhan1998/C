#include<stdio.h>
int main()
{
	int a,b;
	printf("\nnhap a: ");
	scanf("%d",&a);
	printf("\nnhap b: ");
	scanf("%d",&b);
	int temp=a;
	a=b;
	b=temp;
	printf("\nso a sau khi doi vi tri la: %d",a);
	printf("\nso b sau khi doi vi tri la: %d",b);
	return 0;
}
