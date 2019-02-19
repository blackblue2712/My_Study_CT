#include <stdio.h>
int sum(int x)
{
	int i,sum=0;
	for (i=1;i<=x;i++)
	sum+=i;
	return(sum);
}
int main()
{
	int n,s;
	printf("n:");scanf("%d",&n);
	s=sum(n);
	printf("Sum=%d\n",sum(n));
	return 0;
}
