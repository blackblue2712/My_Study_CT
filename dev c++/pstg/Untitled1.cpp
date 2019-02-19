#include <iostream>
using namespace std;
class phanso
{
public:
	double a;
	double b;
	void nhapsl()
	{
		cout << "\n nhap tu so :"; cin >> a;
		cout << " nhap mau so :"; cin >> b;
	}
	void insl()
	{
		cout << " " << a << "/" << b;
	}
};
int USCLN(int a, int b)
{
	if (a == 0) return b;
	return USCLN(b%a, a);
}
phanso toigian(phanso p, int u) {
	phanso pc;
	pc.a = p.a / u;
	pc.b = p.b / u;
	return pc;
}
phanso cong(phanso p1, phanso p2)
{
	phanso p;
	p.a = p1.a*p2.b + p1.b*p2.a;
	p.b = p1.b*p2.b;
	return p;
}
phanso tru(phanso p1, phanso p2)
{
	phanso p;
	p.a = p1.a*p2.b - p1.b*p2.a;
	p.b = p1.b*p2.b;
	return p;
}
phanso nhan(phanso p1, phanso p2)
{
	phanso p;
	p.a = p1.a * p2.a;
	p.b = p1.b * p2.b;
	return p;
}
phanso chia(phanso p1, phanso p2)
{
	phanso p;
	p.a = p1.a * p2.b;
	p.b = p1.b * p2.a;
	return p;
}
int main()
{
	phanso p, p1, p2, pc;
	int ucln;

	cout << "Nhap vao so thu nhat: "; p1.nhapsl();
	cout << "\nNhap vao so thu hai: "; p2.nhapsl();
	cout << "\nTong phan so la:";
	p = cong(p1, p2);
	ucln = USCLN(p.a, p.b);
	pc = toigian(p, ucln);
	pc.insl();
	cout << "\nHieu phan so la:";
	p = tru(p1, p2); 
	ucln = USCLN(p.a, p.b);
	pc = toigian(p, ucln);
	pc.insl();
	cout << "\nTich phan so la:";
	p = nhan(p1, p2);
	ucln = USCLN(p.a, p.b);
	pc = toigian(p, ucln);
	pc.insl();
	cout << "\nThuong phan so la:";
	p = chia(p1, p2);
	ucln = USCLN(p.a, p.b);
	pc = toigian(p, ucln);
	pc.insl();
	cout << "\n\n";
	system("pause");
}

