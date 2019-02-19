#include<iostream>
#include<conio.h>
#include<math.h>
#include<fstream>
#include<string>
#include<iomanip>
#include<string.h>
#define MAX 1000
using namespace std;
typedef struct NhanVien
{
	char HoTen[30];
	char Phai[5];
	char NgaySinh[10];
	char DiaChi[50];
	float LuongCB;
	float BHXH;
	float Thuong;
	float Phat;
	float Luong;
	
}NV;
void nhapn(int &n)
{
	do
	{
		cout<<"\nNhap so luong nhan vien trong cong ty: ";
		cin>>n;
		if(n<=0)
			cout<<"\nBan khong duoc nhap so luong Nv duoi 0 nguoi!\nVui long nhap lai!!";
	}
	while(n<=0);
}
void nhap1nv(NV &x)
{
	
	cout<<"\n";
	cout<<"\t- Ho Ten: ";fflush(stdin);
	gets(x.HoTen);
	cout<<"\t- Phai: ";fflush(stdin);
	gets(x.Phai);
	cout<<"\t- Ngay Sinh: ";fflush(stdin);
	gets(x.NgaySinh);
	cout<<"\t- Dia Chi: ";fflush(stdin);
	gets(x.DiaChi);
	cout<<"\t- Luong co ban: ";
	cin>>x.LuongCB;
	cout<<"\t- BHXH: ";
	cin>>x.BHXH;
	cout<<"\t- Thuong: ";
	cin>>x.Thuong;
	cout<<"\t- Phat: ";
	cin>>x.Phat;
	x.Luong=(float)(x.LuongCB + x.Thuong - x.BHXH - x.Phat);
	
}
void nhapdanhsach(NV nv[], int n)
{
	cout<<"\nNHAP THONG TIN CHO CAC NHAN VIEN=============\n";
	for(int i=0; i<n; i++)
	{
		cout<<"-Nhap Nhan Vien thu "<<i+1<<":";
		nhap1nv(nv[i]);
	}
}
void xuat1nv(NV &x)
{
	cout<<"\n";
	cout<<left<<setw(20)<<x.HoTen;
	cout<<left<<setw(10)<<x.Phai;
	cout<<left<<setw(15)<<x.NgaySinh;
	cout<<left<<setw(20)<<x.DiaChi;
	cout<<left<<setw(15)<<x.LuongCB;
	cout<<left<<setw(15)<<x.BHXH;
	cout<<left<<setw(10)<<x.Thuong;
	cout<<left<<setw(10)<<x.Phat;
	cout<<left<<setw(10)<<x.Luong;
}
void xuatdsnv(NV nv[], int n)
{
	cout<<"\n"<<left<<setw(20)<<"Ho Ten"<<left<<setw(10)<<"Phai"<<left<<setw(15)<<"Ngay Sinh"<<left<<setw(20)<<"Dia Chi"<<left<<setw(15)<<"Luong CB"<<left<<setw(15)<<"BHXH"<<left<<setw(10)<<"Thuong"<<left<<setw(10)<<"Phat"<<left<<setw(10)<<"Luong Linh";
	for(int i=0; i<n; i++)
	{		
		xuat1nv(nv[i]);
	}
}
float luongtl(NV nv)
{
	return (float)(nv.LuongCB + nv.Thuong - nv.BHXH - nv.Phat);
}
void xuatdsrafile(NV nv[],int n)
{
	ofstream ds ("nv.txt");
	if(!ds)
	{
		cout<<"\nXuat file khong thanh cong! Vui long kiem tra lai!";
	}
	else
	{
		ds<<"\n"<<left<<setw(20)<<"Ho Ten"<<left<<setw(10)<<"Phai"<<left<<setw(15)<<"Ngay Sinh"<<left<<setw(20)<<"Dia Chi"<<left<<setw(15)<<"Luong CB"<<left<<setw(15)<<"BHXH"<<left<<setw(10)<<"Thuong"<<left<<setw(10)<<"Phat"<<left<<setw(10)<<"Luong Linh";
		for(int i=0; i<n; i++)
		{
			ds<<"\n";
			ds<<left<<setw(20)<<nv[i].HoTen;
			ds<<left<<setw(10)<<nv[i].Phai;
			ds<<left<<setw(15)<<nv[i].NgaySinh;
			ds<<left<<setw(20)<<nv[i].DiaChi;
			ds<<left<<setw(15)<<nv[i].LuongCB;
			ds<<left<<setw(15)<<nv[i].BHXH;
			ds<<left<<setw(10)<<nv[i].Thuong;
			ds<<left<<setw(10)<<nv[i].Phat;
			ds<<left<<setw(10)<<nv[i].Luong;	
		}
		ds.close();
		cout<<"\nXuat ra file thanh cong!";
	}
}
void timttnv(NV nv[], int n, char ht[])
{
	cout<<"\n"<<left<<setw(20)<<"Ho Ten"<<left<<setw(10)<<"Phai"<<left<<setw(15)<<"Ngay Sinh"<<left<<setw(20)<<"Dia Chi"<<left<<setw(15)<<"Luong CB"<<left<<setw(15)<<"BHXH"<<left<<setw(10)<<"Thuong"<<left<<setw(10)<<"Phat"<<left<<setw(10)<<"Luong Linh";
	int t=0;
	for(int i=0; i<n; i++)
	{
		if(strcmp(nv[i].HoTen,ht)==0)
		{
			xuat1nv(nv[i]);
			t++;
		}
	}
	if(t==0)
		cout<<"\nKhong tim thay thong tin NV tren!";
}
void hoanvi(NV &x, NV &y)
{
	NV temp = x;
	x=y;
	y=temp;
}
void sxtheoluonggiam(NV nv[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(luongtl(nv[i]) < luongtl(nv[j]))
			{
				hoanvi(nv[i],nv[j]);
			}
		}
	}
}
int luongmax(NV nv[], int n)
{
	cout<<"\n"<<left<<setw(20)<<"Ho Ten"<<left<<setw(10)<<"Phai"<<left<<setw(15)<<"Ngay Sinh"<<left<<setw(20)<<"Dia Chi"<<left<<setw(15)<<"Luong CB"<<left<<setw(15)<<"BHXH"<<left<<setw(10)<<"Thuong"<<left<<setw(10)<<"Phat"<<left<<setw(10)<<"Luong Linh";
	float max=0;
	for(int i=0;i<n;i++)
	{
		if(luongtl(nv[i])>max)
			max=luongtl(nv[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(luongtl(nv[i])==max)
			xuat1nv(nv[i]);
	}
}
int demduoimucthuong(NV nv[], int n, int th)
{
	int d=0;
	for(int i=0; i<n; i++)
	{
		if(nv[i].Thuong<th)
			d++;
	}
	return d;
}
float luongcb(NV nv)
{
	return float(nv.LuongCB);
}
void luongcbmax(NV nv[],int n)
{
	float max=0;
	cout<<"\n"<<left<<setw(20)<<"Ho Ten"<<left<<setw(10)<<"Phai"<<left<<setw(15)<<"Ngay Sinh"<<left<<setw(20)<<"Dia Chi"<<left<<setw(15)<<"Luong CB"<<left<<setw(15)<<"BHXH"<<left<<setw(10)<<"Thuong"<<left<<setw(10)<<"Phat"<<left<<setw(10)<<"Luong Linh";
	for(int i=0;i<n;i++)
	{
		if(luongcb(nv[i])>max)
			max=luongcb(nv[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(luongcb(nv[i])==max)
			xuat1nv(nv[i]);
	}	
}
float phat(NV nv)
{
	return (float)(nv.Phat);
}
int mainphat(NV nv[],int n)
{
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(phat(nv[i])!=0)
			d++;
	}	
	return d;
}
void filephat(NV nv[],int n)
{
	ofstream f ("phat.txt");
	if(!f)
	{
		cout<<"\nXuat file khong thanh cong! Vui long kiem tra lai!";
	}
	else
	{
		f<<"\nCo "<<mainphat(nv,n)<<" Nv bi phat!";
		f.close();
		cout<<"\nXuat file thanh cong!";
	}
}
void xoa(NV nv[],int n,char hten[])
{
	for(int i=0;i<n;i++)
	{
		if(strcmp(nv[i].HoTen,hten)==0)
		{
			for(int j=i;j<n;j++)
			{
				nv[i]=nv[i+1];
			}
			n--;
			cout<<"\nDa xoa thanh cong!";
		}
	}
}
void menu(NV nv[],int &n)
{
	int chon;
	do
	{
		cout<<"\n     MENU";
		cout<<"\n1. Nhap thong tin Nhan Vien.";
		cout<<"\n2. Xuat danh sach cac Nhan Vien.";
		cout<<"\n3. Xuat danh sach Nhan Vien ra file.";
		cout<<"\n4. Tim thong tin Nhan Vien theo hoten";
		cout<<"\n5. Sap xep theo luong giam dan.";
		cout<<"\n6. Tim thong tin NV co luong cao nhat.";
		cout<<"\n7. Dem so NV co muc thuong nho hon muc thuong cho phep.";
		cout<<"\n8. tim nguoi co LuongCB cao nhat.";
		cout<<"\n9. In ra so NV bi phat.";
		cout<<"\10. Xoa 1 NV theo HoTen.";
		cout<<"\n0. Thoat";
		cout<<"\nHay nhap 1 so theo nhu cau cua ban:";
		cin>>chon;
		switch(chon)
		{
			case 0: exit(0); break;
			case 1: nhapn(n);
					nhapdanhsach(nv, n);break;
			case 2: xuatdsnv(nv, n);break;
			case 3: xuatdsrafile(nv, n);break;
			case 4: char ht[30];
					cout<<"\nNhap HoTen NV can tim: ";
					fflush(stdin);
					gets(ht);
					timttnv(nv, n, ht);break;
			case 5: sxtheoluonggiam(nv, n);
					xuatdsnv(nv, n);break;
			case 6: luongmax(nv, n);break;
			case 7: int th;
					cout<<"\nNhap so tien thuong han muc: ";
					cin>>th;
					cout<<"\nCo "<<demduoimucthuong(nv, n,th)<<" NV duoi muc thuong la "<<th;break;
			case 8: luongcbmax(nv,n);break;
			case 9: filephat(nv,n);break;
			case 10:char hten[30];
					cout<<"\nNhap HoTen NV can xoa: ";
					fflush(stdin);
					gets(hten); 
					xoa(nv,n,hten);break;
			default: cout<<"\t!!!!__Lenh Ban vua Nhap Khong Dung...Moi Ban Nhap Lai__!!!!\n";
		}
	}
	while(chon!=0);
}
int main()
{
	cout<<"Ho Ten: NGUYEN NHUT TRUONG";
	cout<<"\nMSSV: 17607079";
	cout<<"\nDe tai: Chuong trinh quan ly nhan vien trong mot cong ty.";
	cout<<"\n_____oOo_____";
	int n;
	NV nv[MAX];
	NV x;
	menu(nv, n);
	getch();
	return 1;
}
