#include<stdio.h>
void nhap_mang(int a[4][4])
{
	 for(int i=0;i<4;i++)
	 {
	 	for(int j=0;j<4;j++)
	 	{
	 		printf("\na[%d][%d]",i,j);
	 		scanf("%d",&a[i][j]);
		 }
	 }
}
void xuat_mang(int a[4][4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n\n");
	}
}
void tim_max(int a[4][4])
{
	int max;
	int x;
	for(int i=0;i<4;i++)
	{
		int tong=0;
		int j=0;
		for(int j=0;j<4;j++)
		{
			tong+=a[i][j];
		}
		if(i==0)
		{
			max=tong;
		}
		if(tong>max)
		{
			max=tong;
			x=i;
		}
		
	}
	printf("\nhang %d co tong lon nhat mang la: %d",x,max);
}
int main()
{
	int a[4][4];
	nhap_mang(a);
	printf("\n---mang ban vua nhap la----\n");
	xuat_mang(a);
	tim_max(a);
	return 0;
	
}
