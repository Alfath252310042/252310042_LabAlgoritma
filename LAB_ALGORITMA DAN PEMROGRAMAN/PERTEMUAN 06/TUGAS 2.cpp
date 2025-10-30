#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 2, c = 1, bil;

    cout << "Bil-A\t| Bil-B\t| Bil-C\n";
    cout << "-------------------------\n";

    for (bil = 1; bil <= 10; bil++) {
        a += b;
        b += c;
        c += 2;

        cout << a << "\t| " << b << "\t| " << c << endl;

        if (c == 13) {
            break; // keluar dari loop jika c == 13
        }
    }

    cout << "\nProgram selesai. Tekan Enter untuk keluar...";
    cin.ignore();  // membersihkan buffer input
    cin.get();     // menunggu user menekan Enter
    return 0;
}

