/*nhap 3 so nguyen a,b,c kiem tra xem no co phai ba canh cua tam giac hay khong neu dung thi tinh dien tich
va chu vi cua tam giac ay*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("\nnhap a: ");
	scanf("%d",&a);
	printf("\nnhap b: ");
	scanf("%d",&b);
	printf("\nnhap c: ");
	scanf("%d",&c);
	if(a+b<=c||a+c<=b||b+c<=a)
	{
		printf("\nday khong phai la canh cua tam giac\n");
	}
	{
		printf("\nchu vi cua tam giac la: %d",a+b+c);
		float q=(float)((a+b+c)/2);
		printf("\ndien tich cua tam giac la: %.3f",(float)sqrt(q*(q-a)*(q-b)*(q-c)));
	}
	return 0;
}
