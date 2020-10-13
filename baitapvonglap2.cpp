#include <stdio.h>
int main ()
{
	int n;
	do{
		printf("Nhap n = ");
		scanf("%d",&n);
	}while(n<0);
	double S=0;
	for(int i=1; i<=n; i++){
	S = S + (double)1/i;	
	}
	printf("Tong S = %f",S);
}

