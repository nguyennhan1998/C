#include<stdio.h>
int main()
{
	int n;
	int i,j;
	printf("\nnhap n: ");
	scanf("%d",&n);
	int a[n][n];
	for( i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\na[%d][%d]",i,j);
			scanf("%5d",&a[i][j]);
		}
	}
	int x;
	int tong=0;
	for(i=n-1,j=0;i>=0,j<n;i--,j++)
	{
		if(i==j)
		continue;
		tong+=a[i][j];
		x++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				tong +=a[i][j];
				x++;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n\n");
	}
	float tbc=(float)tong/x;
	printf("\ntong cua cac duong cheo la: %f",tbc);
	return 0;
}
