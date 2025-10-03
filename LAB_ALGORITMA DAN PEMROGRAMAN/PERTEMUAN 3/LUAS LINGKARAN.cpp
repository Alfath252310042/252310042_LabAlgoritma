#include <iostream>    // Library untuk input dan output
using namespace std;

int main() {
    const double pi = 3.1415;  // Konstanta pi
    double r, luas;            // Variabel r = jari-jari, luas = hasil perhitungan

    // Judul program
    cout << "===== MENGHITUNG LUAS LINGKARAN =====" << endl;

    // Input
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    // Proses perhitungan luas lingkaran
    luas = pi * r * r;

    // Output (menampilkan rumus, langkah, dan hasil)
    cout << "\nRumus Luas Lingkaran : L = pi * r * r" << endl;
    cout << "Perhitungan          : " << pi << " x " << r << " x " << r << endl;
    cout << "Hasil Luas Lingkaran : " << luas << endl;

    cout << "=====================================" << endl;

    return 0;  // Program selesai dengan normal
}

