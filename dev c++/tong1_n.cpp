#include <stdio.h>
#include <math.h>
int main()
{
	int dkien,j,n,i=2;
	long a[11][11];
	dkien=(int) sqrt(100);
for (i=0;i<=9;i++)
	for (j=1;j<=10;j++)
		a[i+1][j]=i*10+j;
/*for (i=0;i<=9;i++)
	for (j=1;j<=10;j++)
	
	printf("  %d",a[i+1][j]);printf("\n");
*/
	printf("\n");
i=2;
printf("dkien:%d\n",dkien);
a[1][1]=0;

for (i=0;i<=9;i++)
	for (j=1;j<=10;j++)
		for (n=2;n<=dkien;n++)
				if (a[i][j]==n) a[i][j]=n;else
				if
				 ( ((a[i+1][j] % n ) == 0)   )
					a[i+1][j]=0;
		
for (i=0;i<=9;i++)
	for (j=1;j<=10;j++)
		if (a[i+1][j]!=0)
			printf(" %d",a[i+1][j]);
			
getchar();
return 0;
}
