#include<stdio.h>
int main()
{
	int n;
	printf("\nnhap n: ");
	scanf("%d",&n);
	printf("\nso thuan nghich nho hon %d la:\n",n);
	for(int i=0;i<n;i++)
	{
		int s=0;
		int m=i;
		while(m!=0)
		{
			s=s*10+m%10;
			m/=10;
		}
		if(s==i)
		{
			printf("%d  ",i);
		}
	}
	return 0;
}
