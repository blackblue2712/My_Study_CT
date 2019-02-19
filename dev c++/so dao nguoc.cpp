#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("nhap so muon nghich dao: ");
	scanf("%d",&n);
	long s=0;
	int a;
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		s=s*10+a;
	}
	printf("so dao nguoc la: %d",s);
}
