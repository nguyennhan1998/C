//chuong trinh nhap vao so nguyen in ra so lon nhat nho nhat
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nnhap a: ");
	scanf("%d",&a);
	printf("\nnhap b: ");
	scanf("%d",&b);
	printf("\nhap c: ");
	scanf("%d",&c);
	if(a>b)
	{
		if(b>c)
		{
			printf("\nmin: %d",c);
			printf("\nmax: %d",a);
		}
		else
		{
			if(a>c)
			{
				printf("\nmin: %d",b);
				printf("\nmax: %d",a);
			}else
			{
				printf("\nmin: %d",b);
				printf("\nmax: %d",c);
			}
		}
	}
	else{
		if(a>c)
		{
			printf("\nmin: %d",c);
			printf("\nmax: %d",b);
		}
		else
		{
			if(b>c)
			{
				printf("\nmin: %d",a);
				printf("\nmax: %d",b);
			}
			else
			{
				printf("\nmin: %d",a);
				printf("\nmax: %d",c);
			}
		}
	}
	return 0;
}
