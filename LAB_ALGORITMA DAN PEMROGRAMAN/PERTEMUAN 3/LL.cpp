#include <iostream>
using namespace std;

int main() {
    // konstanta untuk nilai pi
    const double pi = 3.14159;
    
    // variabel untuk jari-jari (r), tinggi (t), dan volume
    double r, t, volume;
    
    // judul program
    cout << "======= MENCARI VOLUME TABUNG =======" << endl;
    
    // input jari-jari tabung
    cout << "Masukkan jari-jari tabung = ";
    cin >> r;
    
    // input tinggi tabung
    cout << "Masukkan tinggi tabung    = ";
    cin >> t;
    
    // tampilkan rumus volume tabung
    cout << "\nRumus Volume Tabung: pi * r * r * t" << endl;
    cout << pi << " x " << r << " x " << r << " x " << t << endl;
    
    // hitung volume
    volume = pi * r * r * t;
    
    // tampilkan hasil
    cout << "Volume Tabung adalah = " << volume << endl;
    cout<<"======================================10";
    return 0;
}
