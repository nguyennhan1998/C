#include<stdio.h>
int main()
{
	int n;
	printf("\nnhap n: ");
	scanf("%d",&n);
	int i,num,num1=0,num2=1;
	for(i=1;i<n;i++)
	{
		num=num1+num2;
		num1=num2;
		num2=num;
    } 
	printf("\nso phibonacy %d la %d  ",n,num);
	return 0;
}
