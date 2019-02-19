#define maxsize 100
#include<conio.h>
#include<stdio.h>
#include<string.h>


struct hoso {
public:
	char ten[20];
	char ho[20];
	long long luong;
	int tuoi;
	char dchi[50];
	int stt;
	
}inf[maxsize],temp;

int main() {
	int n;
	int stt;
	do {
		printf("Nhap so nguoi:"); scanf("%d", &n);
	} while (n <= 0);
	for (int i = 0; i<n; i++) {
		printf("\nNhap ho:");fflush(stdin);gets(inf[i].ho);
		printf("Ten:"); fflush(stdin); scanf("%s",&inf[i].ten);
		printf("\nLuong:"); scanf("%d", &inf[i].luong);
		printf("\nDia chi:"); fflush(stdin); gets(inf[i].dchi);
		printf("\nTuoi:"); scanf("%d", &inf[i].tuoi);
		inf[i].stt = i + 1;
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(inf[i].ten,inf[j].ten)>0){
				temp=inf[i];
				inf[i]=inf[j];
				inf[j]=temp;
				stt=inf[i].stt;
				inf[i].stt=inf[j].stt;
				inf[j].stt=stt;
			}
		}
	}
	
	printf("\t\tDANH SACH CAN BO CONG NHAN VIEN\n");
	printf("%-10s","STT");
	printf("%-25s","HO VA TEN");
	printf("%-20s","LUONG");
	printf("%-10s","TUOI");
	printf("%s","DIACHI\n");
	for (int i = 0; i<n; i++) {
		printf("\n%-10d %-1s %-14s %-15d %-10d %s", inf[i].stt,inf[i].ho, inf[i].ten, inf[i].luong, inf[i].tuoi, inf[i].dchi);
	}
	return 0;
}

