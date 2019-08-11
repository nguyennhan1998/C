#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	char s2[10];
	printf("\nnhap chuoi s1: \n");
	scanf("%s",s1);
	printf("\nnhap chuoi s2: \n");
	scanf("%s",s2);
	char* temp;
	temp=strstr(s1,s2);
	if(temp==0)
	{
		printf("\nchuoi 2 khong thuoc chuoi 1");
	}else
	{
		printf("\nchuoi 2 khong thuoc chuoi 1");
	}
	return 0;
}
