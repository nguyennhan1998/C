#include<stdio.h>
int main()
{
	int a;
	printf("\nnhap a:");
	scanf("%d",&a);
	int count=0;
	//cac so nguyen nho hon 2 khong phai la so nguyen to
	if(a<2)
	{
		printf("\n%d khong phai la so nguyen to",a);
		return 0;
	}
	for( int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
			if(count>2)//truong hop la so lan chia het nhieu hon 2=>so nguyen to va ngung xet
			break;
	}
	}
	if(count==2)
	{
		printf("\n%d la so nguyen to",a);
	}
	else
	{
		printf("\n%d khong phai la so nguyen to",a);
	}
	return 0;

}
