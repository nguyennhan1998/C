#include<stdio.h>
int main()
{
	int a,b;
	printf("\nnhap chieu rong: ");
	scanf("%d",&a);
	printf("\nnhap chieu dai: ");
	scanf("%d",&b);
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			//cac phan tu nam o giua se duoc in ra tab
			if(i!=0&&i!=a-1&&j!=0&&j!=b-1)
			{
				printf("\t");
			}
			else
			printf("\t*");
			if(j==b-1)//dieu kien de xuong dong
			{
				printf("\n\n\n");
			}
		}
	}

	return 0;
}
