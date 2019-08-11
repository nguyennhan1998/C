#include<stdio.h>
#include<string.h>
int xet_chuoi(char a[],char b[])
{
	char *temp;
	temp=strstr(a,b);
	if(temp==0)
	{
		return 0;
	}else
	return 1;
}
int main()
{
	char a[20],b[20];
	printf("\nnhap chuoi a:\n");
	scanf("%s",a);
	printf("\nnhap chuoi b:\n");
	scanf("%s",b);
	int t=xet_chuoi(a,b);
	if(t==0)
	{
		printf("\nchuoi b khong thuoc chuoi a");
	}else
	{
		printf("\nchuoi b thuoc chuoi a");
	}
	return 0;
	
}
