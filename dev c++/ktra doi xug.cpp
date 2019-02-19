#include <conio.h>
#include <stdio.h>


int inmang(int a[],int N){
	int i;
	for (i=0;i<N;i++){
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
}
}
int check(int a[],int N){
int i,mark=0;
for (i=0;i<N/2;i++)
	{
	if(a[i]!=a[N-1-i])
		{
	mark=1;
	printf("mang khong doi xung");
	break;	
		}
	}
	if(mark==0) printf("mang doi xung");
}
int main(){
	int i,N,a[50];
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&N);
	inmang(a,N);
	printf("mang da nhap la: ");
	check(a,N);
	
}
