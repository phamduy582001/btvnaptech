#include <stdio.h>
#include <cmath>
int main ()
{
	int a,b;
	printf("Nhap a = ");
	scanf("%d",&a);
	printf("Nhap b = ");
	scanf("%d",&b);
	int min,UCLN=0;

	if(a==0&&b==0)
	{
		printf("khong co UCLN cua a va b ");
	}else if(a!=0&&b==0)
	{
	printf("UCLN cua a va b la %d",a);
	}else if(a==0&&b!=0){
	printf("UCLN cua a va b la %d",b);
	}else{
	if(a<b){
	min=a;
	}else{
	min=b;
		 }
		}
		
	
	for(int i = 1;i <= min; i++){
		if(a%i==0 && b%i==0)
		{
			UCLN=i;
		}
		
	}
	printf("UCLN cua %d va %d la %d",a,b,UCLN);
}
