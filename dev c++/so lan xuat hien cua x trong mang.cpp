#include <stdio.h>
#include <conio.h>

int dem(int a[],int N,int x){
	int i,count=0;
	for(i=0;i<N;i++)
	{
		if (a[i]==x)
		count++;
	}
	return count;
}
int main(){
	int a[50],N,x;
	int i;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&N);
	printf("nhap vao so can kiem tra: " );
	scanf("%d",&x);
	for (i=0;i<N;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	printf("so lan xuat hien %d trong mang la: %d",x,dem(a,N,x));
}
