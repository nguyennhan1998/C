//kiem tra xem so a co phai la so hoan hao hay khong
#include<stdio.h>
int main()
{
	int a;
	printf("\nnhap a: ");
	scanf("%d",&a);
	int sum=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0)
		{
			sum+=i;
		}
	}
	if(sum==a)
	{
		printf("\n%d la so hoan hao",a);
	}
	else
	printf("\n%d khong phai la so hoan hao",a);
	return 0;
}
