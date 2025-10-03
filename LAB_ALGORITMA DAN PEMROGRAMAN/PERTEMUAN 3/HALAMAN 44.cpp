#include <iostream>   // Library untuk input-output (cout, endl)
using namespace std;  // Agar tidak perlu menulis std:: setiap kali pakai cout

int main() {
    // Inisialisasi variabel
    int x = 50;       // Variabel x diberi nilai awal 50
    int a, b, c, d, e; // Variabel a, b, c, d, e untuk menampung hasil operasi

    // Proses logika
    a = x > 5 + 5;     // Apakah 50 > 10 ? jika benar lebih besar maka outputnya 1 dan jika salah outputnya 0
    b = x > 100;       // Apakah 50 > 100 ? hasilnya false (0)
    c = a && b;        // Apakah a AND b ? (1 && 0 = 0)
    d = a || b;        // Apakah a OR b ? (1 || 0 = 1)
    e = !(c);          // NOT c ? !(0) = 1

    // Output hasil
    cout << "\n Nilai a = x > 5 + 5 = " << a << endl;   // Menampilkan hasil a
    cout << "\n Nilai b = x > 100 = " << b << endl;     // Menampilkan hasil b
    cout << "\n Nilai c = a && b = " << c << endl;      // Menampilkan hasil c
    cout << "\n Nilai d = a || b = " << d << endl;      // Menampilkan hasil d
    cout << "\n Nilai e = !(c) = " << e << endl;        // Menampilkan hasil e

    return 0; // Mengakhiri program
}

