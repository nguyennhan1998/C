#include<stdio.h>
int main()
{
	int n;
	printf("\nnhap n: ");
	scanf("%d",&n);
	int m=n;//su dung m thay n de tim so nghich dao neu su dung n dan den gia tri n thay doi
	int rev=0;
	while(m)
	{
		rev=rev*10 + m % 10;
		m/=10;
	}
	//so sanh so nghich dao xem co bang so n ban dau hay khong
	if(rev==n)
	{
		printf("\n%d la so thuan nghich",n);
	}
	else
	{
		printf("\n%d khong phai la so thuan nghich",n);
	}
	
	return 0;
}
