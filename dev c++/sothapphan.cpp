#include<stdio.h>
#include<string.h>

int main(){
	int n, b[1001];
	printf("nhap vao n: ");
	scanf("%d", &n);
	float a[1001], c[1001];
	for(int i =0; i<n ; i++){
		scanf("%f", &a[i]);
	}
	for(int i =0; i<n; i++){
		b[i]=(int)a[i];
	}
	for(int i =0; i<n; i++){
		c[i]= a[i]-b[i];
	}
	for(int i=0; i<n; i++){
		if(c[i]==0) printf("%d  ", b[i]);
	}
	return 0;
}
