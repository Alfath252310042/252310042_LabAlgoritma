#include<iostream>
using namespace std;
int main()
{
int n1, n2 ,n3;
float rata;
string nama;
	
	cout<<"Program Hitung Nilai Rata - Rata"<< endl;
	cout<<"Nama Siswa : ";
	getline(cin,nama);
	
	cout<<"Nilai Pertandingan I : ";
	cin>>n1;
	cout<<"Nilai Pertandingan II : ";
	cin>>n2;
	cout<<"Nilai Pertandingan III : ";
	cin>>n3;
	
	rata=(n1+n2+n3)/3;

	cout<<"Siswa Bernama "<<nama<<endl;
	cout<<"Memperoleh Nilai rata-rata "<<rata;
	cout<<" hasil perlombaan yang diikutinya"<<endl;
	
		
	
	if(rata>85){
		cout<<"Hadiah yang didapat adalah Komputer i5 ";
	}
	else if(rata>70){
		cout<<"Hadiah yang didapat adalah Uang sebesar Rp. 2.500.000 ";
	}
	else {
		cout<<"Hadiah yang didapat adalah Liburan ";
	}
	
}
