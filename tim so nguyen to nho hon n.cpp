#include<stdio.h>
int main()
{
	int n;
	printf("\nnhap n: ");
	scanf("%d",&n);
	printf("\nso nguyen to nho hon n la:\n");
	for(int i=2;i<n;i++)//xet tung so tu 2 den n
	{
		int count=0;
		for(int j=1;j<=i;j++)//tim so nguyen to
		{
			if(i%j==0)
			{
				count ++;
			}
		}
		if(count==2)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
