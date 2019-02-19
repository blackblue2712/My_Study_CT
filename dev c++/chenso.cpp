#include<stdio.h>
#include <conio.h>

int nhapmang(int a[],int N){
	int i;
	for (i=0;i<N;i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}


int sapxep(int a[],int N){
	int i,j,t;
	for(i=0;i<N-1;i++){
		for (j=i+1;j<N;j++)
			if (a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
		}
	}	
}

void xuat(int a[], int n){
	printf("\nMang ket qua: ");
	for(int i = 0; i< n; i++)
		printf("%d ", a[i]);
}

void gop(int a[], int N, int x){
	if(x> a[N-1]) a[N] = x;
	else{
		int i = N;
		while(a[i-1] > x){ // dich phai cac phan tu > x, tim vi tri chen x vao mang
			a[i] = a[i-1];
			--i;
		}
		
		a[i] = x;
	}
printf("mang ket qua:");
for (int i=0;i<N+1;i++){
	printf("%d",a[i]);
}
}

int main(){
	int a[200], N, x;
	printf("nhap so phan tu cua mang: ");
	scanf("%d",&N);
	nhapmang(a,N);
	sapxep(a,N);
	xuat(a,N);
	printf("\nNhap gia tri x: ");
	scanf("%d", &x);
	gop(a,N,x);
	return 0;
}
