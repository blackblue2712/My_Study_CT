#include<stdio.h>
#define maxsize 100
#include<conio.h>
#include<string.h>
int main(){
	int n;
	int M=0;
	int s;
	char str[maxsize];
	do{
		printf("Nhap n:");scanf("%d",&n);
		if(n<=2 || n>=20){
			printf("\nEnter again!");
		}
	M=n*(n*n+1)/2;
	}while(n<=2 || n>=20);
	printf("\nNhap chuoi:");
	fflush(stdin);
	gets(str);
	for(int i=0;i<strlen(str);i++){
		if(str[i]<65||str[i]>90){
			while(str[i]<65||str[i]>90){
				fflush(stdin);
				printf("Vui long nhap chuoi theo yeu cau!");
				printf("\nNhap chuoi:");
				gets(str);
			}
		}
	}
	for(int i=0;i<strlen(str);i++){
		s=s+str[i];	
	}
	printf("\nResult=%d",s/M);
	return 0;
	}

