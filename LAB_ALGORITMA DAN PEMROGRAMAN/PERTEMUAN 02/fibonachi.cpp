#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah suku Fibonacci: ";
    cin >> n;

    int a = 0, b = 1, c;

    cout << "Deret Fibonacci: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
    return 0;
}

