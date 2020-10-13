#include <stdio.h>
int main ()
{
	int n;
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<0);
	int S=0;
	for(int i=1;i<=n;i++){
		S=(n*(n+1))/2;
	}
	printf("Tong S = %d",S);
}
