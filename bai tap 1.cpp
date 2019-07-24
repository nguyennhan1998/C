/*viet chuong trinh nhap vao hai so nguyen tinh thuong neu a>b in ra tich neu nguoc lai*/
#include<stdio.h>
int  main()
{
	int a,b;
	printf("\nnhap a:\n");
	scanf("%d",&a);
	printf("\nnhap b:\n");
	scanf("%d",&b);
	if(a>b)
	{
		if(b!=0)
		{
			printf("%d/%d=%f",a,b,a/b);
		}
	}
	else
	{
		printf("%d*%d=%d",a,b,a*b);
	}
	return 0;
}
