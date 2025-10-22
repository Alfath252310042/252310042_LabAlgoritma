#include <iostream>
using namespace std;

int main() {
    int n;              
    char lanjut;        
    
    do {
        cout << "Masukkan bilangan : ";
        cin >> n;

        int i = 1;
        long long faktorial = 1;

        while (i <= n) {
            faktorial *= i;
            i++;
        }

        cout << "Hasil " << n << "! adalah = " << faktorial << endl;

        cout << "Ulang lagi ? (y/n): ";
        cin >> lanjut;
        cout << endl;

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Program selesai. Terima kasih!" << endl;
    return 0;
}

