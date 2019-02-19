#include<stdio.h>
#include<conio.h>
#define maxsize 100
#include<string.h>

struct Sach{
	public:
		char ten[50];
		char tacgia[50];
		int gia;
};
Sach nhap(Sach b[],int n){
	for (int i=0;i<n;i++){
	printf("\nNhap ten sach:");fflush(stdin);gets(b[i].ten);
	printf("\nNhap tac gia:");fflush(stdin);gets(b[i].tacgia);
	printf("\nNhap gia:");scanf("%d",&b[i].gia);
	}
	
	
}
void in(Sach b[],int n){
	for(int i=0;i<n;i++){	
	printf("\nTen sach: %s",b[i].ten);
	printf("\nTac gia: %s",b[i].tacgia);
	printf("\nGia: %d",b[i].gia);
	}

}

void find(Sach b[],char name[50],int n){
	for(int i=0;i<n;i++){
		if(strcmp(b[i].ten,name)==0){
			printf("\nSach giong nhau %d:",i+1);
			printf("\nTen sach: %s",b[i].ten);
			printf("\nTac gia: %s",b[i].tacgia);
			printf("\nGia: %d",b[i].gia);
			
		}
	}
}

int main(){
	Sach ebook[maxsize];
	char name[50];
	int n;
	printf("\nNhap so luong sach: ");scanf("%d",&n);
	nhap(ebook,n);
	in(ebook,n);
	printf("\nNhap name: ");fflush(stdin);
	gets(name);
	printf("Tim kiem\n\n");
	find(ebook,name,n);
	return 0;
	}

