
B?n dã g?i
19 gi? tru?c
#include <stdio.h>
int main ()
{
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int s=0;
	int t=0;
	for(int i=1;i<=n;i++){
		t=i%2;
		if(t!=0)
		s=s+i;
	}
	printf("Tong s = %d",s);
}

