#include <stdio.h>
#include <conio.h>

int nhapmang(int a[], int N)
{
	int i;
	for(i=1;i<=N;i++){
	printf("a[%d] = ",i);
	scanf("%d",&a[i]);}
}
/*int inmang(int a[],int N)
{
	int i;
	for(i=0;i<=N-1;i++)
	printf("%d",a[i]);
}*/
int demSNT(int a[],int N)
{
	int i,j,dem,demso=0;
	for (i=1;i<=N;i++){
	dem=0;
	{
		for (j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
				dem=dem+1;
		}	
			if(dem==2){
				demso=demso+1;
			}
		}
	
	}
		printf("co %d so nguyen to trong mang",demso);
}
int main(){
	int a[50],N;
	printf("so phan tu thuc te cua mang la:");
	scanf("%d",&N);
	nhapmang(a,N);
	demSNT(a,N);
}
