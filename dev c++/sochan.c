#include <stdio.h>
#include <malloc.h>

void nhap(int *p, int n){
	int i;
	for (i=0;i<n;i++) {
		printf("Nhap pt thu %d : ",i+1);
		scanf("%d",(p+i));
	}
}
int sochan(int *p, int n){
	int i, dem= 0;
	for (i=0;i<n;i++) {
		if (*(p+i)%2==0) dem = dem + 1;
	}
	return dem;
}

int main(){
	int *a, n;
	printf("Nhap vao n : ");scanf("%d",&n);
	a=(int*)malloc(sizeof(int)*n);
	nhap(a,n);
	printf("Co %d so chan",sochan(a,n));
	free(a);
	return 0;
}
