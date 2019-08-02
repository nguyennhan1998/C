#include<stdio.h>
int main()
{
	int tong=0;
	int n;
	for(int i=1,n=0;n<100;i+=2,n++)
	{
		tong+=i;
	}
	printf("\ntong cua 100 so le dau tien la: %d",tong);
	return 0;
}
