#include <conio.h>
#include <stdio.h>
#include <math.h>
int nhapmang(int a[],int N){
	int i;
	for(i=0;i<N;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
		
	}
}
int local(int a[],int N,int x)
{
	int i,d;
	int min=abs(a[0]-x);
	for(i=0;i<N;i++)
	{
	d=abs(a[i]-x);
	if (d<min)
	min=d;
	return min;
	}
}
int pos(int a[],int N,int x){
	int i;
	int min=local(a,N,x);
	printf("chi so gan x nhat la:");
	for (i=0;i<N;i++){
	if (abs(a[i]-x)==min)
	printf("%5d",i);	
	}
}
int main(){	
	int i,a[50],N,x;
	printf("nhap vao so ptu mang:");
	scanf("%d",&N);
	printf("nhap x: ");
	scanf("%d",&x);
	nhapmang(a,N);
	pos(a,N,x);
	
}
