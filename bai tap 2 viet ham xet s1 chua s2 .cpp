#include<stdio.h>
#include<string.h>
void mang_con(char a[],char b[])
{
	char *temp;
	temp=strstr(a,b);
	printf("%s",temp);
}
int main()
{
	char a[20],b[20];
	printf("\nnhap chuoi a:\n");
	scanf("%s",a);
	printf("\nnhap chuoi b:\n");
	scanf("%s",b);
	printf("\nmang con cua mang b va mang a la:\n");
	mang_con(a,b);
	return 0;
	
}
