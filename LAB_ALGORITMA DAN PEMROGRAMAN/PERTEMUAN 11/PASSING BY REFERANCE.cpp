#include<conio.h>
#include<iostream>
using namespace std;

void tambah(int *c, int *d);

int main ()
{
	int a, b;
	a = 4;
	b = 6;
	
//	clrscr ();
	cout << "Nilai Sebelum pemanggilan Fungsi";
	cout << "\na = "<< a << " b = "<< b;
	tambah (&a, &b);
	cout << endl;
	cout << "Nilai Setelah pemanggilan Fungsi";
	cout << "\na = "<< a << " b = "<< b;
	getch ();
}

void tambah (int *c, int *d)
{
	*c += 7;
	*d += 5;
	cout << endl;
	cout << "\nNilai di Akhir Fungsi Tambah()";
	cout << "\nc = " << *c << " d = "  <<*d;
}
