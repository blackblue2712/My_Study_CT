#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct{
	unsigned int ng;
	unsigned int th;
	unsigned int nam;
}nt;

typedef struct{
	char mssv[10];
	char hoten[20];
	nt ns;
	char qq[20];
	float dtb;
	int drl;
}SinhVien;

int nhap(int sv[], int n){
	int i;
	for (i=0;i<n;i++){
		printf("Nhap thong tin sv thu %d",i);
		printf("\nNhap MSSV ");fflush(stdin);gets(sv[i].mssv);
		printf("\nNhap Ho va Ten  ");fflush(stdin);gets(sv[i].hoten);
		printf("\nNhap ngay sinh ");scanf("%d",&sv[i].nt.ng);
		printf("\nNhap thang sinh ");scanf("%d",&sv[i].nt.th);
		printf("\nNhap nam sinh ");scanf("%d",&sv[i].nt.nam);
		printf("\nNhap que quan ");fflush(stdin);gets(sv[i].qq);
		printf("\Nhap diem tb tich luy ");scanf("%f",&sv[i].dtb);
		printf("\Nhap diem ren luyen ");scanf("%d",&sv[i].drl);
	}
}

void in(int sv[], int n){
	int i;
	for (i=0;i<n;i++){
	printf("MSSV:  %s 	|	Ho va ten  %s	|	Ngay sinh %02d-%02d-%d  	|	Que Quan  %s  	|	Diem TBTL  %f 	|	Diem ren luyen  %d ",sv[i].mssv,sv[i].hoten,sv[i].ns.ng,sv[i].ns.th,sv[i].ns.nam,sv[i].qq,sv[i].dtb,sv[i].drl);
	}
}
int main(){
	int n;
	int sv[50]
	printf("Nhap so sv ");scanf("%d",n);
	nhap(sv,n);
	in(sv,n);
	return 0;
	
}
