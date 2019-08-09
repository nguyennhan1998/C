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
	printf("\nmang s2 nam trong mang s1 la : %s",temp);
	return 0;
}
