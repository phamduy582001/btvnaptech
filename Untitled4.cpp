#include <stdio.h>
int main ()
{
	int a;
	int x;
	printf("So tien dem gui ngan hang : ");
	scanf("%d",&a);
	if(a>0){
		x = (a+(a*0.08))+(a+(a*0.08))+(a+(a*0.08))+(a+(a*0.08));
		printf("Tong tien sau 4 nam thu duoc la %d",x);
	}else{
		printf("Hoc fpt thanh tai \n");
	}
}
