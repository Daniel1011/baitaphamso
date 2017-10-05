// baitaphamso.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;


void Bai1_1()
{
	int n;
	do {
		cout << "Nhap n:";
		cin >> n;
	} while (n<1);
	double s = 0;
	for (int i = 1; i <= n; i++)
		s = s + 1.0 / (2 * i);
	cout << "Tong s=" << s;

}

void Bai1_2()
{
	int n;
	do {
		cout << "Nhap n";
		cin >> n;
	} while (n<1);
	double s = 0;
	double a = 1;
	for (int i = 1; i <= n; i++)
	{
		a = (a*i);
		s = s + a;
	}
	cout << "Tong s=" << s;
}

void Bai1_3()
{
	int i, n, j, k;
	do {
		cout << "Nhap n";
		cin >> n;
	} while (n<1);
	for (int i = 2; i <= n; i++)
	{
		k = 2;
		for (j = 2; j <= int(i / 2); j++)
			if (i% j == 0)
				k = 0;
		if (k == 2)
			cout << i << "   ";
	}
	cout << endl;
}


void Bai1_4()
{
	int n, s = 0;
	do {
		cout << "Nhap n";
		cin >> n;
	} while (n<1);

	while (n > 0) {
		s = s + n % 10;
		n = n / 10;
	}
	cout << "Gia tri cua tong la:" << s;
}

void Bai1_5()
{
	int a, b, m, n;

	do {
		cout << "Nhap a";
		cin >> a;
		cout << "Nhap b";
		cin >> b;
		m = a; n = b;
	} while (a <= 0 && b <= 0);
	do {
		if (a>b)
			a = a - b;
		else b = b - a;
	} while (a != b);
	cout << "Boi chung nho nhat la :" << (m*n) / a << endl;
	cout << "Uoc chung lon nhat la:" << a;
}

void Bai2_1()
{
	int i, n, j, k, s = 0;
	do {
		cout << "Nhap n";
		cin >> n;
	} while (n < 1);
	for (int i = 2; i <= n; i++)
	{
		k = 2;
		for (j = 2; j <= int(i / 2); j++)
			if (i% j == 0)
				k = 0;
		if (k == 2)
			s = s + i;
	}
	cout << "Tong gia tri cac so nguyen to nho hon n la:" << s;
}

void Bai2_2()
{
	int a, b, m, n;

	do {
		cout << "Nhap a";
		cin >> a;
		cout << "Nhap b";
		cin >> b;
		m = a; n = b;
	} while (a <= 0 && b <= 0);
	do {
		if (a>b)
			a = a - b;
		else b = b - a;
	} while (a != b);
	cout << "Boi chung nho nhat la :" << (m*n) / a << endl;
	cout << "Uoc chung lon nhat la:" << a;
}

void timnghiem(int a, int b, int c) {
	int denta = b * b - 4 * a * c;
	if (a == 0) {
		cout << "Loi, a khong the bang khong";
	}
	else {
		if (denta < 0) {
			cout << "Phuong trinh vo nghiem";
		}
		else {
			if (denta == 0) {
				double nghiemkep = -b / (2 * a);
				if (nghiemkep < 0) {
					cout << "Khong co nghiem khi denta = 0";
				}
				else {
					double nghiemkepdung = sqrt(nghiemkep);
					if (nghiemkep == 0) {
						cout << " x= " << nghiemkepdung;
					}
					else {
						cout << " x= " << nghiemkepdung << " x= " << -nghiemkepdung;
					}
				}
			}
			else {
				double nghiem1 = (-b + sqrt(denta)) / (2 * a), nghiem2 = (-b - sqrt(denta)) / (2 * a);
				if (nghiem1 < 0) {
					cout << "Nghiem thu nhat am";
				}
				else {
					double nghiem1dung = sqrt(nghiem1);
					if (nghiem1 == 0) {
						cout << " x= " << nghiem1dung;
					}
					else {
						cout << " x= " << nghiem1dung << " x= " << -nghiem1dung;
					}
				}
				if (nghiem2 < 0) {
					cout << "Nghiem thu hai am";
				}
				else {
					double nghiem2dung = sqrt(nghiem2);
					if (nghiem2 == 0) {
						cout << " x= " << nghiem2dung;
					}
					else {
						cout << " x= " << nghiem2dung << " x= " << -nghiem2dung;
					}
				}
			}
		}
	}
}

void Bai2_4() {
	int a, b, c;
	cout << "Dang phuong trinh trung phuong la: a(x^4) + b(x^2) + c = 0\n";
	cout << "Nhap a, b, c\n";
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;
	cout << "Phuong trinh trung phuong: " << a << "(x^4) +" << b << "(x^2) + " << c << " = 0\n";
	timnghiem(a, b, c);
}

double dodaivecto(int a, int b) {
	return sqrt(a * a + b * b);
}

void Bai2_5() {
	int x1, y1, x2, y2, x3, y3;
	cout << "Nhap toa do 3 dinh A,B,C\n";
	cout << "Toa do A: ";
	cin >> x1; cin >> y1;
	cout << "Toa do B: ";
	cin >> x2; cin >> y2;
	cout << "Toa do C: ";
	cin >> x3; cin >> y3;

	double i, j, k;
	i = dodaivecto(x2 - x1, y2 - y1);
	j = dodaivecto(x3 - x2, y3 - y2);
	k = dodaivecto(x1 - x3, y1 - y3);

	if (i * i + j * j == k * k || k * k + j * j == i * i || i * i + k * k == j * j) {
		cout << "Tam giac vuong";
	}
	else {
		if (i == j && j == k && k == i) {
			cout << "Tam giac deu";
		}
		else {
			if (i == j || j == k || k == i) {
				cout << "Tam giac can";
			}
			else {
				cout << "Tam giac thuong";
			}
		}
	}
}



void Phan1()	//bai tap bat buoc LT vong lap
{
	int chon; char yn;
	do
	{
		cout << "\n Phan 1: Vong lap";
		cout << "\n Ban chon bai:";
		cin >> chon;
		switch (chon)
		{
		case 1: Bai1_1(); break;
		case 2: Bai1_2(); break;
		case 3: Bai1_3(); break;
		case 4: Bai1_4(); break;
		case 5: Bai1_5(); break;
		}
		cout << "\n Ban co muon tiep tuc ? (y/n):";
		cin >> yn;
	} while (yn == 'y' || yn == 'Y');
}

void Phan2()	//bai tap bat buoc LT ham so 
{
	int chon; char yn;
	do
	{
		cout << "\n Phan 2: ham so";
		cout << "\n Ban chon bai:";
		cin >> chon;
		switch (chon)
		{
		case 1: Bai2_1(); break;
		case 2: Bai2_2(); break;
		case 4: Bai2_4(); break;
		case 5: Bai2_5(); break;
		}
		cout << "\n Ban co muon tiep tuc ? (y/n):";
		cin >> yn;
	} while (yn == 'y' || yn == 'Y');
}

int main()
{
	do {
		cout << "Bai tap buoi 2 Pham Van Hao Quang \n";
		cout << "Menu \n";
		cout << "Ket thuc \n";
		cout << "1. Phan 1:Vong lap \n";
		cout << "2. Phan 2:Ham so \n";
		cout << "...................";
		cout << "Ban chon chuc nang so: \n";

		int chon;
		cin >> chon;
		switch (chon)
		{
		case 0: return 0;
		case 1: Phan1();
		case 2: Phan2();
			break;
		}
	} while (1);
	return 0;
}


