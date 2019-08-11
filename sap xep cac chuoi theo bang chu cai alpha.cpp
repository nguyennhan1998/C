#include<stdio.h>
#include<string.h>
int main()
{
	char a[4][20],temp[20];
	for(int i=0;i<4;i++)
	{
		printf("\nnhap chuoi %d: ",i+1);
		scanf("%s",a[i]);
	}
	for(int i=1;i<4;i++)
	{
		for(int j=1;j<4;j++)
		{
			if(strcmp(a[j-1],a[j])>0)
			{
				strcpy(temp,a[j-1]);
				strcpy(a[j-1],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	printf("\nchuoi sau khi sap xep la:");
	for(int i=0;i<4;i++)
	{
		printf("\n%s",a[i]);
	}
	return 0;
}
