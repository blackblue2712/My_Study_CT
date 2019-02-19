#define maxsize 100
#include<conio.h>
#include<stdio.h>
#include<string.h>


class hoso {
public:
	char hoten[10];
	long long luong;
	int tuoi;
	char dchi[50];
	int stt;
	char tachten(char hoten[]){
		char ten;
		for(int i=strlen(hoten);i>=0;i--){
			if(hoten[i]==' '){
				strcpy(ten,hoten[i+1]);
			}
		} 
	}
	void swap(char hoten)
};

int main() {
	hoso inf[maxsize];
	char name[30], ad[50];
	int n;
	char temp[30];
	do {
		printf("Nhap so nguoi:"); scanf("%d", &n);
	} while (n <= 0);
	for (int i = 0; i<n; i++) {
		printf("Ten:"); fflush(stdin); gets(name);
		strcpy(inf[i].hoten, name);
		printf("\nLuong:"); scanf("%d", &inf[i].luong);
		printf("\nDia chi:"); fflush(stdin); gets(ad);
		strcpy(inf[i].dchi, ad);
		printf("\nTuoi:"); scanf("%d", &inf[i].tuoi);
		inf[i].stt = i + 1;
	}
	
	printf("\t\tDANH SACH CAN BO CONG NHAN VIEN\n");
	printf("%-10s","STT");
	printf("%-15s","HO VA TEN");
	printf("%-15s","LUONG");
	printf("%-10s","TUOI");
	printf("%s","DIACHI\n");
	for (int i = 0; i<n; i++) {
		printf("%-10d %-15s %-15d %-10d %s", inf[i].stt, inf[i].hoten, inf[i].luong, inf[i].tuoi, inf[i].dchi);
	}
	return 0;
}

