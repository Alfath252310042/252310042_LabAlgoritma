#include<iostream>
using namespace std;
#define harga 4500.02

int main ()
{
	float jumlah,total;
	
	cout << "Masukan Jumlah Barang =";
	cin >> jumlah;
	total = harga*jumlah;
	cout<<"\nYang harus dibayar =" << total;
}
