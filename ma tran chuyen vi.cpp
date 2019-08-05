#include<stdio.h>
int main()
{
	int a[4][3];
	int b[3][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("\na[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("\nmang a :\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n\n");
	}
	printf("\nmang b sau khi chuyen vi la:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%5d",b[i][j]);
		}
		
		printf("\n\n");
	}
	return 0;
}
