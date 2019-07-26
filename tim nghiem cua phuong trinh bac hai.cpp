//tim nghiem cua phuong trinh bac hai
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,delta,x,y;
	printf("\nnhap a: ");
	scanf("%f",&a);
	printf("\nnhap b: ");
	scanf("%f",&b);
	printf("\nnhap c: ");
	scanf("%f",&c);
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				printf("\nphuong trinh co vo so nghiem");
			}
			else
			{
				printf("\nphuong trinh vo nghiem");
			}
		}else
		{
			printf("\nphuong trinh co nghiem la: %f",-c/b);
		}
	}
	else
	{
		delta=b*b-4*a*c;
		if(delta<0)
		{
			printf("\nphuong trinh vo nghiem");
		}
		else if(delta>0)
		{
			x=(-b-sqrt(delta))/(2*a);
			y=(-b+sqrt(delta))/(2*a);
			printf("\nphuong trinh co hai nghiem phan biet la:\nx= %f\ny= %f",x,y);
		}
		else
		{
		    printf("\nphuong trinh co nghiem kep la:\nx=y= %f",-b/(2*a));
	    }
	}
	
	return 0;
}
